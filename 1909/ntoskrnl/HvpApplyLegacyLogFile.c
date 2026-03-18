/*
 * XREFs of HvpApplyLegacyLogFile @ 0x14083F7E4
 * Callers:
 *     HvApplyLogFile @ 0x14083F4C8 (HvApplyLogFile.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140083DF0 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvpGenerateLogMetadata @ 0x140641324 (HvpGenerateLogMetadata.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140830314 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpRecoverDataReadRoutine @ 0x140830CA0 (HvpRecoverDataReadRoutine.c)
 *     HvpIsMetadataArrayCoherent @ 0x14083FB70 (HvpIsMetadataArrayCoherent.c)
 *     HvpUpdateRecoveryVector @ 0x140840008 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyLegacyLogFile(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, __int64),
        void *(__fastcall *a7)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *),
        __int64 a8)
{
  int v10; // r13d
  int v11; // ebx
  ULONG v12; // r14d
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned int v18; // [rsp+30h] [rbp-69h] BYREF
  struct _LOOKASIDE_LIST_EX v19; // [rsp+38h] [rbp-61h] BYREF

  *(_QWORD *)&v19.L.Tag = a5;
  *(_QWORD *)&v19.L.FreeMisses = a3;
  v19.L.AllocateEx = a7;
  *((_DWORD *)&v19.L.SingleListHead + 3) = 0;
  memset(&v19.L.56, 0, 0x28uLL);
  v10 = a1[10] >> 12;
  v18 = 0;
  v11 = HvpRecoverDataReadRoutine(a3, 0x200u, v10 + 4, &v19);
  if ( v11 >= 0 )
  {
    if ( *(_DWORD *)v19.L.ListHead.Alignment == 1414678852 )
    {
      *((_DWORD *)&v19.L.SingleListHead + 2) = a1[10] >> 9;
      *(_QWORD *)&v19.L.Depth = v19.L.ListHead.Alignment + 4;
      v12 = RtlNumberOfSetBits((PRTL_BITMAP)(&v19.L.SingleListHead + 1));
      if ( v12 )
      {
        v13 = v12 << 9;
        HvpGenerateLogMetadata((PRTL_BITMAP)(&v19.L.SingleListHead + 1), 0LL, &v18);
        v14 = a6(8 * v18, 0LL, 859000131LL);
        v15 = v14;
        if ( v14 )
        {
          HvpGenerateLogMetadata((PRTL_BITMAP)(&v19.L.SingleListHead + 1), v14, &v18);
          v16 = v18;
          LODWORD(v19.L.ListEntry.Blink) = a1[10];
          LODWORD(v19.L.FreeEx) = 1162638920;
          HIDWORD(v19.L.ListEntry.Blink) = v18;
          HIDWORD(v19.L.Free) = v13 + 8 * (v18 + 5);
          if ( (unsigned __int8)HvpIsMetadataArrayCoherent(&v19.L.56, v15, v18) )
          {
            v11 = HvpRecoverDataReadRoutine(*(unsigned int **)&v19.L.FreeMisses, (v10 + 1027) & 0xFFFFFE00, v13, &v19);
            if ( v11 >= 0 )
            {
              v11 = HvpApplyLogEntryDataToFileBackedHive(
                      *(ULONG_PTR *)&v19.L.Tag,
                      (__int64)&v19.L.56,
                      v15,
                      v19.L.ListHead.Alignment,
                      v13,
                      &v19.L.AllocateMisses);
              if ( v11 >= 0 )
              {
                if ( ((__int64)v19.L.ListEntry.Flink & 1) != 0 )
                  a1[36] |= 1u;
                if ( a8 )
                  HvpUpdateRecoveryVector(v15, v16, a8);
                v11 = 1073741833;
              }
            }
          }
          else
          {
            v11 = -1073741492;
          }
          ((void (__fastcall *)(__int64, _QWORD))v19.L.AllocateEx)(v15, 8 * v16);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( BYTE2(NlsMbCodePageTag) || (CmpBootType & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v11;
}

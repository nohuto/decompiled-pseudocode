/*
 * XREFs of MmGetSessionMappedViewInformation @ 0x14084D700
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     MiGetSystemPteStatistics @ 0x14085D254 (MiGetSystemPteStatistics.c)
 */

__int64 __fastcall MmGetSessionMappedViewInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r13
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // r14
  _KPROCESS *i; // rcx
  __int64 NextSession; // rax
  _KPROCESS *v13; // rdi
  int SessionId; // r13d
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v24[48]; // [rsp+60h] [rbp-19h] BYREF

  v19 = a4;
  v4 = a3;
  v21 = a3;
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v18, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v7 = v18;
  }
  else
  {
    v7 = 0LL;
    P = 0LL;
    v18 = 0LL;
  }
LABEL_5:
  *v4 = 0;
  LODWORD(v8) = 0;
  v9 = 0;
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = MmGetNextSession(i);
    v13 = (_KPROCESS *)NextSession;
    if ( !NextSession )
      break;
    v10 = v7 + (unsigned int)v8;
    SessionId = MmGetSessionId(NextSession);
    if ( *v19 == -1 || SessionId == *v19 )
    {
      if ( (int)MmAttachSession(v13, (__int64)v24) >= 0 )
      {
        v15 = v8 + 32;
        if ( (int)v8 + 32 < (unsigned int)v8 )
        {
          MmDetachSession((__int64)v13, (__int64)v24);
          ObfDereferenceObject(v13);
          v4 = v21;
          goto LABEL_5;
        }
        v8 = v15;
        if ( v15 <= a2 )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
          MiGetSystemPteStatistics(v16 + 8136, &v22, &v23);
          *(_QWORD *)(v10 + 16) = v22 << 12;
          *(_QWORD *)(v10 + 24) = v23 << 12;
          *(_DWORD *)(v10 + 8) = SessionId;
          v17 = *(_DWORD *)(v16 + 2972);
          v7 = v18;
          *(_DWORD *)(v10 + 12) = v17;
          *(_QWORD *)v10 = v8;
        }
        else
        {
          v9 = -1073741820;
        }
        MmDetachSession((__int64)v13, (__int64)v24);
      }
      if ( *v19 != -1 )
      {
        ObfDereferenceObject(v13);
        break;
      }
    }
  }
  if ( v9 >= 0 && v10 )
    *(_QWORD *)v10 = 0LL;
  if ( v7 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v21 = v8;
  return (unsigned int)v9;
}

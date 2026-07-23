/*
 * XREFs of HvpGrowDirtyVectors @ 0x1401372A4
 * Callers:
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlCopyBitMap @ 0x140083CD0 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall HvpGrowDirtyVectors(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  _RTL_BITMAP *v3; // r14
  ULONG v4; // r12d
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int *v11; // r15
  unsigned int *v12; // rax
  ULONG v13; // r13d
  unsigned int *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rcx
  _RTL_BITMAP Destination; // [rsp+20h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (_RTL_BITMAP *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = a2 >> 9;
  *(&Destination.SizeOfBitMap + 1) = 0;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v7 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(a1 + 108) < v7 )
  {
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v7, 0LL, 959532355LL);
    if ( v11 )
    {
      v12 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v7, 0LL, 959532355LL);
      v19 = v12;
      if ( v12 )
      {
        BitMapHeader.Buffer = v12;
        v13 = v5 - v4;
        Destination.SizeOfBitMap = v5;
        Destination.Buffer = v11;
        BitMapHeader.SizeOfBitMap = v5;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap(v3, &Destination, 0);
          RtlClearBits(&Destination, v4, v13);
        }
        else
        {
          memset(v11, 0, v7);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          RtlCopyBitMap((PRTL_BITMAP)(a1 + 112), &BitMapHeader, 0);
          RtlClearBits(&BitMapHeader, v4, v13);
          v14 = v19;
        }
        else
        {
          v14 = v19;
          memset(v19, 0, v7);
        }
        v15 = *(_QWORD *)(a1 + 96);
        if ( v15 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v15, *(unsigned int *)(a1 + 108));
        v16 = *(_QWORD *)(a1 + 120);
        if ( v16 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v16, *(unsigned int *)(a1 + 108));
        v3->SizeOfBitMap = v5;
        v3->Buffer = v11;
        *(_DWORD *)(a1 + 112) = v5;
        *(_QWORD *)(a1 + 120) = v14;
        *(_DWORD *)(a1 + 108) = v7;
      }
      else
      {
        v2 = -1073741670;
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v11, v7);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 96);
    v3->SizeOfBitMap = v5;
    *(_QWORD *)(a1 + 96) = v8;
    RtlClearBits((PRTL_BITMAP)(a1 + 88), v4, v5 - v4);
    v9 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v5;
    *(_QWORD *)(a1 + 120) = v9;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), v4, v5 - v4);
  }
  return v2;
}

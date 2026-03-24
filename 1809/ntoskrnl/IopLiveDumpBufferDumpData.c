/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x140577FC0
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140579558 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144420 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140578C58 (IopLiveDumpGetCapturePagesNoLock.c)
 */

void __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // r13
  int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // r9d
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned int v11; // edx
  _QWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  _DWORD *v17; // rsi
  _DWORD *v18; // r8
  unsigned __int64 v19; // rcx
  _DWORD *v20; // rdi
  unsigned int v21; // [rsp+30h] [rbp-278h] BYREF
  _DWORD *v22; // [rsp+38h] [rbp-270h]
  __int64 v23; // [rsp+40h] [rbp-268h] BYREF
  __int64 v24; // [rsp+48h] [rbp-260h]
  __int64 v25; // [rsp+50h] [rbp-258h]
  __int64 v26; // [rsp+58h] [rbp-250h]
  _BYTE v27[512]; // [rsp+60h] [rbp-248h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = v2 + 488;
  v25 = v2 + 488;
  if ( v3 < *(_DWORD *)(v2 + 560) )
  {
    v5 = v2 + 368;
    v6 = *(_QWORD *)(v2 + 568) + 16LL * v3;
    v26 = v2 + 368;
    v7 = *(_QWORD *)(v6 + 8) + 48LL;
    v24 = v7;
    while ( 1 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
      IopLiveDumpGetCapturePagesNoLock(v5, v4, (unsigned int)v27, v8, (__int64)&v21, (__int64)&v23);
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 24));
      v9 = v21;
      if ( !v21 )
        break;
      v10 = 0;
      v22 = *(_DWORD **)(*(_QWORD *)(v4 + 64) + 8 * v23);
      v11 = 0;
      v12 = v27;
      do
      {
        v13 = v11++;
        *(_QWORD *)(v7 + 8 * v13) = *v12;
        if ( v11 == 16 || v11 && v10 == v9 - 1 )
        {
          v14 = *(_QWORD *)(v6 + 8);
          v15 = v11 << 12;
          *(_QWORD *)v14 = 0LL;
          *(_WORD *)(v14 + 10) = 0;
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 40) = (unsigned int)v15;
          *(_WORD *)(v14 + 8) = 8 * (((unsigned __int64)(unsigned int)v15 >> 12) + 6);
          v16 = (unsigned int)v15;
          MmMapMemoryDumpMdlEx(*(_QWORD *)v6, v15, *(_QWORD *)(v6 + 8), 0);
          v17 = *(_DWORD **)(*(_QWORD *)(v6 + 8) + 24LL);
          v18 = v22;
          v19 = (unsigned __int64)(unsigned int)v16 >> 2;
          v20 = v22;
          while ( v19 )
          {
            *v20++ = *v17++;
            --v19;
          }
          v7 = v24;
          v22 = (_DWORD *)((char *)v18 + v16);
          v11 = 0;
        }
        ++v10;
        ++v12;
      }
      while ( v10 < v9 );
      v4 = v25;
      v5 = v26;
    }
  }
}

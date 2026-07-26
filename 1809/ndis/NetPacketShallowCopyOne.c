/*
 * XREFs of NetPacketShallowCopyOne @ 0x1C0082470
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C00823D0 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     NetPacketExtensionPrivateGetData @ 0x1C01081DC (NetPacketExtensionPrivateGetData.c)
 */

__int64 __fastcall NetPacketShallowCopyOne(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // dx
  __int64 result; // rax
  unsigned int v8; // r10d
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r11
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  char v19; // cl
  _QWORD *i; // rbx
  __int64 v21; // rcx
  const void *Data; // rax
  void *v23; // r9
  int v24; // ebx

  v5 = a2[2];
  if ( a3[2] > v5 )
    return 3221225626LL;
  v8 = 0;
  *((_BYTE *)a2 + 11) ^= (*((_BYTE *)a3 + 11) ^ *((_BYTE *)a2 + 11)) & 4;
  if ( v5 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(v9 + 8);
      v11 = *(unsigned __int16 *)(v9 + 2);
      v12 = v11 * (v10 & (v8 + *(_DWORD *)a2));
      if ( v8 <= a3[2] )
        v13 = (_QWORD *)(v11 * (v10 & (v8 + *(_DWORD *)a3)) + v9 + 64);
      else
        v13 = 0LL;
      if ( v13 )
      {
        *(_QWORD *)(v12 + v9 + 80) = v13[2];
        *(_QWORD *)(v12 + v9 + 72) = v13[1];
        v16 = v13[3] ^ (*(_QWORD *)(v12 + v9 + 88) ^ v13[3]) & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v12 + v9 + 88) = v16;
        v17 = v16 ^ (v13[3] ^ v16) & 0xFFFFFFC000000LL;
        *(_QWORD *)(v12 + v9 + 88) = v17;
        v18 = v17 ^ (v13[3] ^ v17) & 0x3FF0000000000000LL;
        *(_QWORD *)(v12 + v9 + 88) = v18;
        v15 = v18 ^ (*((_DWORD *)v13 + 6) ^ (unsigned int)v17) & 0x3FFFFFF;
      }
      else
      {
        v14 = *(_QWORD *)(v12 + v9 + 88) & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v12 + v9 + 80) = 0LL;
        *(_QWORD *)(v12 + v9 + 72) = 0LL;
        v14 &= 0xC000000003FFFFFFuLL;
        *(_QWORD *)(v12 + v9 + 88) = v14;
        v15 = v14 & 0xFFFFFFFFFC000000uLL;
      }
      *(_QWORD *)(v12 + v9 + 88) = v15;
      ++v8;
    }
    while ( v8 < a2[2] );
  }
  if ( (dword_1C00A0860 & 4) != 0 )
  {
    v19 = *((_BYTE *)a2 + 11);
    *(_DWORD *)(a2 + 3) = *(_DWORD *)(a3 + 3);
    *((_BYTE *)a2 + 10) = *((_BYTE *)a3 + 10);
    *((_BYTE *)a2 + 11) ^= (*((_BYTE *)a3 + 11) ^ v19) & 1;
    *((_BYTE *)a2 + 11) ^= (*((_BYTE *)a2 + 11) ^ *((_BYTE *)a3 + 11)) & 2;
    for ( i = qword_1C00A2050; i; i = (_QWORD *)i[5] )
    {
      NetPacketExtensionPrivateGetData(i, a2);
      Data = (const void *)NetPacketExtensionPrivateGetData(v21, a3);
      if ( i[9] )
      {
        result = ((__int64 (__fastcall *)(_QWORD, void *, const void *))i[9])(i[6], v23, Data);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        memmove(v23, Data, i[1]);
      }
    }
  }
  else
  {
    v24 = *(_DWORD *)a2;
    memmove(a2, a3, (unsigned int)Size);
    *(_DWORD *)a2 = v24;
  }
  return 0LL;
}

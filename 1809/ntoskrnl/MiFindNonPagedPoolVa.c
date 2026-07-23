/*
 * XREFs of MiFindNonPagedPoolVa @ 0x1401635BC
 * Callers:
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 * Callees:
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiScanNonPagedPoolVa @ 0x1401636E0 (MiScanNonPagedPoolVa.c)
 */

unsigned __int64 __fastcall MiFindNonPagedPoolVa(int a1, unsigned __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // edi
  unsigned __int16 *v8; // rbx
  unsigned __int16 *v9; // r12
  __int64 v10; // rdx
  _DWORD v12[12]; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+60h] [rbp-28h]

  v12[0] = 0;
  v5 = a3;
  v13 = 0;
  v8 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * a3 * (unsigned __int16)KeNumberNodes);
  v9 = &v8[(unsigned __int16)KeNumberNodes];
  while ( 1 )
  {
    if ( *(_QWORD *)(1984LL * v5 + qword_14043DA10 + 1808) || !(_DWORD)InitializationPhase )
    {
      if ( (a1 & 0x200) != 0 )
      {
        v10 = MiScanNonPagedPoolVa(a2, v5, 0LL, v12);
        if ( v10 != -1 )
        {
          *a4 = 0;
          return qword_14043B118[25 * v5 + 20].Alignment + (v10 << 12);
        }
      }
      v10 = MiScanNonPagedPoolVa(a2, v5, 1LL, v12);
      if ( v10 != -1 )
      {
        *a4 = 2;
        return qword_14043B118[25 * v5 + 20].Alignment + (v10 << 12);
      }
      v10 = MiExpandNonPagedPool(a1, a2, v5, 0, a4);
      if ( v10 != -1 )
        return qword_14043B118[25 * v5 + 20].Alignment + (v10 << 12);
    }
    if ( ++v8 == v9 )
      break;
    v5 = *v8;
  }
  return 0LL;
}

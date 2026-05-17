/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x180064B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx
  void *v4; // rax
  int v5; // edi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  memset(a2, 0, 0x28uLL);
  v7 = RtlpHpEnvHandle;
  v3 = (char *)RtlpHpMetadataAlloc(0x200uLL, 0x200uLL, 0, &v7);
  if ( v3 )
  {
    v7 = RtlpHpEnvHandle;
    v4 = RtlpHpMetadataAlloc(0x2000uLL, 0x2000uLL, 1, &v7);
    if ( v4 )
    {
      *a2 = 0LL;
      a2[3] = v4;
      *((_DWORD *)a2 + 2) = 0;
      a2[2] = v3;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v3 + 512 >= v3 ? 0x40 : 0) != 0 )
        memset64(v3, (unsigned __int64)(a2 + 1) | 1, v3 + 512 >= v3 ? 0x40 : 0);
      v3 = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v3 )
    {
      v7 = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v3, &v7);
    }
  }
  else
  {
    v5 = -1073741801;
  }
  return v5 >= 0;
}

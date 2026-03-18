/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x14062BA94
 * Callers:
 *     PfSnPrefetchMetadata @ 0x14062B7A8 (PfSnPrefetchMetadata.c)
 * Callees:
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14062CC38 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 */

__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rsi
  NTSTATUS v12; // edi
  _QWORD *v13; // rdi
  size_t Size; // [rsp+40h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-9h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-1h] BYREF
  int v18[2]; // [rsp+80h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v8 = *(_QWORD *)(a5 + 8);
  v9 = *(_QWORD *)(a5 + 16);
  v16 = 0LL;
  *(_QWORD *)v18 = 0LL;
  *(_OWORD *)Object = 0LL;
  v20 = 0x200000000LL;
  v10 = PfpOpenHandleCreate((unsigned int)v18, a1, v9, v8, 1048577, 16417, 0, a2);
  v11 = v20;
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a4 )
    {
      v13 = Object[0];
      if ( (int)IopQueryXxxInformation(Object[0], (__int64)&v16, (__int64)va, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v16;
        *(_QWORD *)a4 = v13[3];
        *(_DWORD *)(a4 + 8) = v11;
      }
    }
    LODWORD(Size) = 8 * *(_DWORD *)(a3 + 4) + 16;
    v12 = IopXxxControlFile(*(void **)v18, 0LL, 0LL, 0LL, (unsigned __int64)v17, 0x90120u, (char *)a3, Size, 0LL, 0, 0);
    if ( v12 >= 0 )
      v12 = 0;
  }
  if ( (v11 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v18, a1);
  return (unsigned int)v12;
}

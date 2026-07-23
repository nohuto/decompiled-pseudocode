/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x1401B6030
 * Callers:
 *     MiCaptureRetpolineImportInfo @ 0x1401B50D8 (MiCaptureRetpolineImportInfo.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        char *a1,
        __int64 a2,
        __int64 a3,
        unsigned int (*a4)(void),
        _DWORD *a5,
        ULONG *a6)
{
  __int64 *v9; // rax
  unsigned int v10; // ebx
  __int64 *v11; // rsi
  ULONG *v12; // r14
  ULONG v13; // edx
  ULONG v14; // ebp
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r15d
  ULONG v20[14]; // [rsp+20h] [rbp-38h] BYREF

  v9 = (__int64 *)RtlImageDirectoryEntryToData(a1, 1u, 0xCu, v20);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    if ( (char *)v9 + v20[0] <= &a1[a3] )
    {
      v12 = a6;
      v13 = v20[0] >> 3;
      v14 = 4 * (v20[0] >> 3);
      if ( v14 <= *a6 )
      {
        if ( v13 )
        {
          v16 = v13;
          do
          {
            *a5 = 0;
            v17 = *v11;
            if ( *v11 )
            {
              v18 = v17 - a2;
              if ( (unsigned __int64)(v17 - a2 + 0x80000000LL) <= 0xFFFFFFFF && (!a4 || a4()) )
                *a5 = v18;
            }
            ++v11;
            ++a5;
            --v16;
          }
          while ( v16 );
          v12 = a6;
        }
      }
      else
      {
        v10 = -1073741789;
      }
      *v12 = v14;
    }
    else
    {
      return (unsigned int)-1073741701;
    }
  }
  else
  {
    *a6 = 0;
  }
  return v10;
}

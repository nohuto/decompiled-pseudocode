/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x140158738
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x140187DDC (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140714468 (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int (*a4)(void),
        _DWORD *a5,
        unsigned int *a6)
{
  __int64 v7; // rbp
  NTSTATUS v9; // eax
  __int64 *v10; // rsi
  unsigned int v11; // ebx
  unsigned int *v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ebp
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r15d
  unsigned int v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]

  v22 = a2;
  v7 = a3;
  LOWORD(a3) = 12;
  LOBYTE(a2) = 1;
  v9 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, (__int64)&v20, &v21);
  v10 = v21;
  v11 = 0;
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 )
  {
    if ( (unsigned __int64)v10 + v20 > a1 + v7 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v12 = a6;
      v13 = v20 >> 3;
      v14 = 4 * (v20 >> 3);
      if ( v14 > *a6 )
      {
        v11 = -1073741789;
      }
      else if ( v13 )
      {
        v16 = v13;
        do
        {
          *a5 = 0;
          v17 = *v10;
          if ( *v10 )
          {
            v18 = v17 - v22;
            if ( (unsigned __int64)(v17 - v22 + 0x80000000LL) <= 0xFFFFFFFF && (!a4 || a4()) )
              *a5 = v18;
          }
          ++v10;
          ++a5;
          --v16;
        }
        while ( v16 );
        v12 = a6;
      }
      *v12 = v14;
    }
  }
  else
  {
    *a6 = 0;
  }
  return v11;
}

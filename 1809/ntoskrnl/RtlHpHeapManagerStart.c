/*
 * XREFs of RtlHpHeapManagerStart @ 0x140170368
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x1401701B8 (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x14018D688 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpMetadataHeapStart @ 0x140009ACC (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCreate @ 0x140140BA0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140170438 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140170508 (RtlCSparseBitmapStart.c)
 */

NTSTATUS __fastcall RtlHpHeapManagerStart(
        _RTL_RUN_ONCE *a1,
        unsigned int a2,
        _RTL_RUN_ONCE a3,
        unsigned __int64 a4,
        char a5)
{
  NTSTATUS result; // eax
  unsigned int v10; // edi
  char v11; // bl
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  a1[9].Ptr = a3.Ptr;
  result = RtlCSparseBitmapStart(&a1[1], 2 * (a4 >> 20), a2, a2 == 1);
  if ( result >= 0 )
  {
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpHpVaMgrCtxStart)(
               &a1[10],
               a2,
               (_RTL_RUN_ONCE)a3.Value,
               a4 - 1);
    if ( result >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v12 = 0x100uLL;
        LOBYTE(v12) = (2 * (a2 & 3)) | 1;
        RtlpHpMetadataHeapCreate(a1 + 1557, &v12, 0LL);
      }
      if ( (a5 & 1) != 0 )
      {
        v10 = 0;
        v11 = 2 * (a2 & 3);
        while ( 1 )
        {
          v12 = 0uLL;
          BYTE1(v12) = v10;
          LOBYTE(v12) = v11 | (v10 != 0);
          v13 = v12;
          result = RtlpHpMetadataHeapStart(&a1[2 * v10 + 1554], &v13);
          if ( result < 0 )
            break;
          if ( ++v10 >= 3 )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

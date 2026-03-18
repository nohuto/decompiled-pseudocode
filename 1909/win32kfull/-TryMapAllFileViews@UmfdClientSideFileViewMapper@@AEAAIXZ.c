/*
 * XREFs of ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x1C011E170
 * Callers:
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C011E100 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C011F680 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall UmfdClientSideFileViewMapper::TryMapAllFileViews(UmfdClientSideFileViewMapper *this)
{
  __int64 v1; // rax
  __int64 i; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 36LL); i = (unsigned int)(i + 1) )
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(*(_QWORD *)(*(_QWORD *)(v1 + 200) + 8 * i), &v6, &v5, 0LL) )
      break;
    v1 = *(_QWORD *)this;
  }
  return (unsigned int)i;
}

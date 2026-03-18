/*
 * XREFs of ??4?$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z @ 0x1C0028E58
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(a1 - 3);
  v3 = 0LL;
  if ( a2 )
    v3 = a2 + *(a1 - 2) - v2;
  *(_QWORD *)(v2 + 40) = v3;
  result = a2;
  *a1 = a2;
  return result;
}

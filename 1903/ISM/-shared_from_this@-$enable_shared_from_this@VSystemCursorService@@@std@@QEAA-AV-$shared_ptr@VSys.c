/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180035AA4
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800CC2D0 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC630 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ??$_Construct_from_weak@VSystemCursorService@@@?$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService@@@1@@Z @ 0x1800CB5CC (--$_Construct_from_weak@VSystemCursorService@@@-$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::enable_shared_from_this<SystemCursorService>::shared_from_this(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !(unsigned __int8)std::_Ptr_base<SystemCursorService>::_Construct_from_weak<SystemCursorService>(a2, a1) )
  {
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  return v2;
}

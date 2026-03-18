/*
 * XREFs of VfDevObjAdjustFdoForVerifierFilters @ 0x1409735C0
 * Callers:
 *     IovUtilMarkStack @ 0x14015B6A8 (IovUtilMarkStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfDevObjAdjustFdoForVerifierFilters(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( *(__int64 (__fastcall **)(PDEVICE_OBJECT, PIRP))(result + 328) == ViFilterDispatchPnp )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *(_QWORD *)a1 = result;
  }
  return result;
}

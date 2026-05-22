/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_inputSystemBamoConnection__ @ 0x18003DBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__ISMStatics::s_inputSystemBamoConnection__()
{
  return Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&ISMStatics::s_inputSystemBamoConnection);
}

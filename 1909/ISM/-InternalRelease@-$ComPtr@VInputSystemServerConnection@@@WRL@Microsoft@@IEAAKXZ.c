/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A920
 * Callers:
 *     _dynamic_atexit_destructor_for__ISMStatics::s_inputSystemBamoConnection__ @ 0x18003DBA0 (_dynamic_atexit_destructor_for__ISMStatics--s_inputSystemBamoConnection__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  }
  return result;
}

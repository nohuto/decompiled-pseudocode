/*
 * XREFs of ?GiveSpatialDataToPID@MPCManagerClient@@UEAAJH@Z @ 0x1800DA900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GiveSpatialDataToPID(MPCManagerClient *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 132) + 152LL);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  else
    return 0LL;
}

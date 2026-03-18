/*
 * XREFs of ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00E0F04
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00E0C5C (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispBroker::DispBrokerClient::IsValid(DispBroker::DispBrokerClient *this)
{
  __int64 v1; // rcx
  bool result; // al
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( v1 )
  {
    v4 = 0;
    v3[0] = 0LL;
    v3[1] = 0LL;
    if ( (int)ZwAlpcQueryInformation(*(_QWORD *)(v1 + 8), 0LL, v3, 16LL, &v4) >= 0 && v4 == 16 )
      return 1;
  }
  return result;
}

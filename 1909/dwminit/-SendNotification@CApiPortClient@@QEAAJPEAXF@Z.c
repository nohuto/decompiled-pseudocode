/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004138
 * Callers:
 *     DwmpUpdateUserSettings @ 0x180003E78 (DwmpUpdateUserSettings.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x1800040E4 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800043F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004420 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180004884 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x1800048B0 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800065E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  CApiPortClient *v4; // rcx
  CApiPortClient *v5; // rcx
  int IsConnected; // esi
  signed int v7; // eax
  volatile signed __int32 *v8; // rdi
  __int16 v9; // r9
  unsigned int v10; // ebp
  int v11; // eax
  signed int v12; // eax

  v3 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v4);
  if ( !byte_18000B7B8 )
  {
    do
    {
      v7 = CApiPortClient::EnsureConnected(v5);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x6Du);
        goto LABEL_16;
      }
      v8 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v10 = CPortClient::SendComplexAsyncRequest((CPortClient *)v8, *a2, a2, v9);
      if ( v8 && _InterlockedExchangeAdd(v8 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v8)(v8, 1LL);
      EnterCriticalSection(&CriticalSection);
      v5 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v5);
      if ( v10 != -805306313 )
        break;
      v11 = IsConnected--;
    }
    while ( v11 > 0 );
    v12 = CApiPortClient::Translate(v10);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x86u);
  }
LABEL_16:
  LeaveCriticalSection(&CriticalSection);
  return v3;
}

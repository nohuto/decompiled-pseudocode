/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x1800844F8
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  int v7; // edx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  CBaseObject *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = *a4;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  else
  {
    v8 = CResource::Create(8u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x76u);
      goto LABEL_16;
    }
  }
  if ( a2 )
    v7 = *(_DWORD *)(a2 + 24);
  else
    v7 = 0;
  if ( a1 )
    v10 = *(unsigned int *)(a1 + 24);
  else
    v10 = 0LL;
  v11 = (volatile signed __int32 *)v14;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**((_QWORD **)v14 + 2) + 1168LL))(
          *((_QWORD *)v14 + 2),
          *((unsigned int *)v14 + 6),
          1LL,
          v10,
          v7);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x7Du);
    goto LABEL_17;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = (CBaseObject *)v11;
  _InterlockedIncrement(v11 + 2);
LABEL_16:
  v11 = (volatile signed __int32 *)v14;
LABEL_17:
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  return v9;
}

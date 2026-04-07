/*
 * XREFs of ?Initialize@CClientArea@@MEAAJI@Z @ 0x180024C80
 * Callers:
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180024D04 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z @ 0x180024F58 (--$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z.c)
 *     ??$CreateProxy@VCWindowNodeProxy@@@CCompositor@@IEAAJPEAPEAVCWindowNodeProxy@@@Z @ 0x18003A8DC (--$CreateProxy@VCWindowNodeProxy@@@CCompositor@@IEAAJPEAPEAVCWindowNodeProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(CClientArea *this, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rcx
  int v8; // eax
  void *v9; // [rsp+28h] [rbp-10h]
  CBaseObject *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  if ( !(_DWORD)a2 )
  {
    v8 = CCompositor::CreateProxy<CWindowNodeProxy>(v3, &v10);
    v5 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x61u, v9);
LABEL_12:
    v6 = (volatile signed __int32 *)v10;
    goto LABEL_6;
  }
  v4 = CCompositor::CreateProxyFromHandle<CWindowNodeProxy>(v3, a2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Du, v9);
    goto LABEL_12;
  }
LABEL_3:
  v6 = (volatile signed __int32 *)v10;
  *((_QWORD *)this + 2) = v10;
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)v10;
  }
  v5 = 0;
LABEL_6:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  return v5;
}

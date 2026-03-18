/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C022E2A8
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0254700 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C003F1E4 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0253F14 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  DXGOVERLAY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGOVERLAY *v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  char *v14; // rsi
  __int64 v15; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 3892LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DXGOVERLAY *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x38uLL);
  v11 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = this;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 7) = 0;
    *((_DWORD *)v7 + 8) = -1;
    *((_QWORD *)v7 + 5) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v13 = DXGOVERLAY::Initialize(v11, a2);
    if ( v13 >= 0 )
    {
      v14 = (char *)this + 376;
      v15 = *(_QWORD *)v14;
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
        __fastfail(3u);
      *(_QWORD *)v11 = v15;
      *((_QWORD *)v11 + 1) = v14;
      *(_QWORD *)(v15 + 8) = v11;
      *(_QWORD *)v14 = v11;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v11);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    v13 = -1073741801;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
  }
  return (unsigned int)v13;
}

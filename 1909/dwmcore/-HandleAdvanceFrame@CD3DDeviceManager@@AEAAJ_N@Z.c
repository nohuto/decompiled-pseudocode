/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x1800632A0
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180077614 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18002353C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180049F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180053C24 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18006495C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??9?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z @ 0x1800ABC70 (--9-$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@QEBA_NAEBV01@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800D2C00 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D6F30 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EAFA0 (-ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z.c)
 *     ?UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800EB21C (-UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x18015DF9C (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x180160E98 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180164564 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801646D0 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, char a2)
{
  __int64 v2; // rdi
  char v3; // r13
  int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rsi
  char **v21; // r15
  __int64 *v22; // r10
  __int64 *i; // r9
  __int64 v24; // r8
  unsigned int j; // eax
  __int64 v26; // rcx
  CD3DResourceSourceReference *v27; // rcx
  __int64 v28; // rax
  CD3DDeviceLevel1::CUnpinResource *v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rdx
  PSLIST_ENTRY k; // rax
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v37; // rbx
  int v38; // r9d
  char *v39; // r11
  unsigned int v40; // r9d
  char *v41; // r8
  unsigned int v42; // r10d
  char *m; // rdx
  __int64 v44; // rax
  int v45; // ecx
  CAtlasManager *v46; // rcx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ebx
  _QWORD v51[11]; // [rsp+30h] [rbp-58h] BYREF
  CD3DDeviceManager *v52; // [rsp+90h] [rbp+8h] BYREF
  char v53; // [rsp+98h] [rbp+10h]
  int v54; // [rsp+A0h] [rbp+18h]
  int v55; // [rsp+A8h] [rbp+20h] BYREF

  v53 = a2;
  v52 = this;
  EnterCriticalSection(&stru_18033D458);
  LODWORD(v2) = qword_18033D510;
  if ( (_DWORD)qword_18033D510 )
  {
    do
    {
      v2 = (unsigned int)(v2 - 1);
      v3 = 0;
      v54 = v2;
      v4 = 0;
      v5 = *(_QWORD *)(qword_18033D4C0 + 24 * v2);
      v6 = *((_QWORD *)g_pComposition + 48);
      if ( v6 != *(_QWORD *)(v5 + 1144) )
      {
        v7 = *(_QWORD *)(v5 + 240);
        v8 = *((_QWORD *)g_pComposition + 48);
        v9 = *(_QWORD *)(v5 + 608);
        *(_BYTE *)(v5 + 1164) = 0;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 152LL))(v7, v9, v8);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE75u, 0LL);
        *(_QWORD *)(v5 + 1144) = v6;
      }
      if ( !*(_DWORD *)(v5 + 880)
        && (v4 == -2005532292 || v4 == -2147024882 || v4 == -2005270523)
        && (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                           (CD3DDeviceManager *)&g_D3DDeviceManager,
                           *(struct _LUID *)(v5 + 712)) )
      {
        if ( v4 == -2005270523 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 632) + 312LL))(*(_QWORD *)(v5 + 632));
          *(_DWORD *)(v5 + 880) = -2003304307;
          if ( v12 != -2005270480 )
          {
LABEL_15:
            if ( *(int *)(v5 + 880) < 0 )
              goto LABEL_21;
            goto LABEL_16;
          }
        }
        CD3DDeviceManager::TempDisableHardwareProtection();
      }
      if ( v4 < 0 )
        goto LABEL_15;
LABEL_16:
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v4, 0LL, &v55) )
      {
        v4 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v55, 0xD4Au, 0LL);
      }
      if ( v4 == -2003304307 )
        *(_DWORD *)(v5 + 880) = -2003304307;
LABEL_21:
      if ( *(_QWORD *)(v5 + 1128) == v6 )
        goto LABEL_72;
      v14 = (_QWORD *)(v5 + 520);
      *(_QWORD *)(v5 + 1128) = v6;
      *(_BYTE *)(v5 + 1161) = 1;
      LODWORD(v15) = *(_DWORD *)(v5 + 544);
      v16 = v5;
      if ( v5 == -520 )
        v16 = 0LL;
      v17 = *(_QWORD *)(v16 + 1128);
      if ( (_DWORD)v15 )
      {
        do
        {
          v15 = (unsigned int)(v15 - 1);
          v18 = *(_QWORD *)(*v14 + 8 * v15);
          if ( (unsigned __int64)(v17 - *(_QWORD *)(v18 + 208)) >= 0x20 )
          {
            DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v5 + 520, (unsigned int)v15);
            *(_BYTE *)(v18 + 216) = 0;
            CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v18);
          }
        }
        while ( (_DWORD)v15 );
        LODWORD(v19) = *(_DWORD *)(v5 + 544);
        while ( (_DWORD)v19 )
        {
          if ( *(_DWORD *)(v5 + 544) <= 0x20u )
            break;
          v19 = (unsigned int)(v19 - 1);
          v20 = *(_QWORD *)(*v14 + 8 * v19);
          if ( v17 != *(_QWORD *)(v20 + 208) )
          {
            DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v5 + 520, (unsigned int)v19);
            *(_BYTE *)(v20 + 216) = 0;
            CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v20);
          }
        }
      }
      v21 = (char **)(v5 + 568);
      v22 = *(__int64 **)(v5 + 576);
      for ( i = *(__int64 **)(v5 + 568); i != v22; ++i )
      {
        v24 = *i;
        if ( *(_DWORD *)(*i + 32) )
        {
          for ( j = 0; j < *(_DWORD *)(v24 + 24); ++j )
          {
            v26 = *(_QWORD *)(v24 + 16);
            if ( *(_QWORD *)(v26 + 8LL * j) == -1LL )
              *(_QWORD *)(v26 + 8LL * j) = 0LL;
          }
          *(_DWORD *)(v24 + 28) += *(_DWORD *)(v24 + 32);
          *(_DWORD *)(v24 + 32) = 0;
        }
      }
      if ( v53 )
      {
        CD3DDeviceLevel1::ProcessPendingUnpin((CD3DDeviceLevel1 *)v5, 0);
      }
      else
      {
        v28 = *(_QWORD *)(v5 + 1000);
        v52 = *(CD3DDeviceManager **)(v5 + 992);
        for ( v51[0] = v28;
              (unsigned __int8)detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>::operator!=(&v52, v51);
              v52 = (CD3DDeviceManager *)(v30 + 16) )
        {
          CD3DDeviceLevel1::CUnpinResource::UnpinSkipped(v29);
        }
      }
      v31 = *(_QWORD **)(v5 + 952);
      while ( v31 != (_QWORD *)(v5 + 952) )
      {
        v27 = (CD3DResourceSourceReference *)(v31 - 2);
        v32 = v31;
        v31 = (_QWORD *)*v31;
        if ( (int)--*((_DWORD *)v27 + 2) <= 0 )
        {
          v33 = *v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 || (v34 = (_QWORD *)v32[1], (_QWORD *)*v34 != v32) )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          CD3DResourceSourceReference::`scalar deleting destructor'(v27, (unsigned int)v34);
        }
      }
      if ( *(_QWORD *)(v5 + 632) )
      {
        for ( k = InterlockedFlushSList((PSLIST_HEADER)(v5 + 912)); k; k = InterlockedFlushSList((PSLIST_HEADER)(v5 + 912)) )
        {
          do
          {
            Next = k->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v5 + 896), (struct CD3DResource ***)&k[-3]);
            k = Next;
          }
          while ( Next );
        }
      }
      if ( *(_QWORD *)(v5 + 1152) != v6 )
      {
        v37 = v5;
        if ( v5 == -568 )
          v37 = 0LL;
        v38 = *(_DWORD *)(v37 + 880);
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, v38, 0x44u, 0LL);
LABEL_70:
          v3 = 1;
          goto LABEL_71;
        }
        v39 = *v21;
        v40 = 0;
        v41 = *(char **)(v5 + 576);
        v42 = 0;
        for ( m = *v21; m != v41; v42 += v45 - *(_DWORD *)(v44 + 28) )
        {
          v44 = *(_QWORD *)m;
          m += 8;
          v45 = *(_DWORD *)(v44 + 24);
          v40 += v45;
        }
        if ( v42 >= v40 / 3 )
          goto LABEL_70;
        LOBYTE(v52) = 0;
        v46 = (CAtlasManager *)(v5 + 568);
        if ( ((v41 - v39) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
        {
          v47 = CAtlasManager::CompactSingleAtlas(v46, (bool *)&v52);
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x54u, 0LL);
        }
        else
        {
          CAtlasManager::MergeAtlases(v46, (bool *)&v52);
        }
        if ( !(_BYTE)v52 || *(int *)(v37 + 880) < 0 )
          goto LABEL_70;
        *(_BYTE *)(v37 + 1164) = 1;
        v3 = 1;
      }
LABEL_71:
      LODWORD(v2) = v54;
LABEL_72:
      if ( *(_BYTE *)(v5 + 1164) )
      {
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v5);
      }
      else if ( !v3 )
      {
        goto LABEL_78;
      }
      if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 632) + 312LL))(*(_QWORD *)(v5 + 632)) < 0 )
      {
        if ( *(int *)(v5 + 880) < 0 )
          goto LABEL_79;
        *(_DWORD *)(v5 + 880) = -2003304307;
      }
LABEL_78:
      if ( *(int *)(v5 + 880) >= 0 )
      {
        CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v2);
        continue;
      }
LABEL_79:
      CD3DDeviceLevel1::ProcessDeviceLost((CD3DDeviceLevel1 *)v5);
    }
    while ( (_DWORD)v2 );
  }
  v49 = dword_18033D4D8;
  if ( dword_18033D4D8 )
  {
    do
    {
      if ( v49 <= (unsigned int)qword_18033D510 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, --v49);
    }
    while ( v49 );
  }
  LeaveCriticalSection(&stru_18033D458);
  return 0LL;
}

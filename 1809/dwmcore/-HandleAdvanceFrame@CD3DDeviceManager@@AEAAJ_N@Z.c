/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800C7A44 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180018B0C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x180036CCC (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180077BBC (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18008C7C8 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180090EAC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800EF09C (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801FADD8 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, char a2)
{
  char v2; // r12
  __int64 v3; // rbp
  char v4; // r14
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 *v18; // r8
  __int64 *i; // rdx
  _QWORD *v20; // r15
  PSLIST_ENTRY k; // rax
  unsigned int v22; // ebx
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // rdi
  struct _SLIST_ENTRY *Next; // rdi
  __int64 j; // r10
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r13
  CD3DResourceSourceReference *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rdx
  int v37; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  EnterCriticalSection(&CriticalSection);
  LODWORD(v3) = qword_180308B10;
  if ( (_DWORD)qword_180308B10 )
  {
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = 0;
      v5 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL);
      v7 = *(_QWORD *)(qword_180308AC0 + 24 * v3);
      if ( v6 != *(_QWORD *)(v7 + 1008) )
      {
        v8 = *(_QWORD *)(v7 + 240);
        v9 = *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL);
        v10 = *(_QWORD *)(v7 + 608);
        *(_BYTE *)(v7 + 1028) = 0;
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 152LL))(v8, v10, v9);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE82u);
        *(_QWORD *)(v7 + 1008) = v6;
      }
      if ( !*(_DWORD *)(v7 + 848)
        && (v5 == -2005532292 || v5 == -2147024882 || v5 == -2005270523)
        && CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
             (CD3DDeviceManager *)&g_D3DDeviceManager,
             *(struct _LUID *)(v7 + 712)) )
      {
        if ( v5 == -2005270523 )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 632) + 312LL))(*(_QWORD *)(v7 + 632));
          *(_DWORD *)(v7 + 848) = -2003304307;
          if ( v30 != -2005270480 )
          {
LABEL_58:
            if ( *(int *)(v7 + 848) < 0 )
              goto LABEL_14;
            goto LABEL_11;
          }
        }
        CD3DDeviceManager::TempDisableHardwareProtection();
      }
      if ( v5 < 0 )
        goto LABEL_58;
LABEL_11:
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v5, 0LL, &v37) )
      {
        v5 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v37, 0xD37u);
      }
      if ( v5 == -2003304307 )
        *(_DWORD *)(v7 + 848) = -2003304307;
LABEL_14:
      if ( *(_QWORD *)(v7 + 992) != v6 )
      {
        v14 = 0LL;
        *(_QWORD *)(v7 + 992) = v6;
        v15 = (_QWORD *)(v7 + 520);
        *(_BYTE *)(v7 + 1025) = 1;
        LODWORD(v16) = *(_DWORD *)(v7 + 544);
        if ( v7 != -520 )
          v14 = v7;
        v17 = *(_QWORD *)(v14 + 992);
        if ( (_DWORD)v16 )
        {
          do
          {
            v16 = (unsigned int)(v16 - 1);
            v25 = *(_QWORD *)(*v15 + 8 * v16);
            if ( (unsigned __int64)(v17 - *(_QWORD *)(v25 + 272)) >= 0x20 )
            {
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v7 + 520), v16);
              *(_BYTE *)(v25 + 280) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v25);
            }
          }
          while ( (_DWORD)v16 );
          LODWORD(v26) = *(_DWORD *)(v7 + 544);
          while ( (_DWORD)v26 )
          {
            if ( *(_DWORD *)(v7 + 544) <= 0x20u )
              break;
            v26 = (unsigned int)(v26 - 1);
            v31 = *(_QWORD *)(*v15 + 8 * v26);
            if ( v17 != *(_QWORD *)(v31 + 272) )
            {
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v7 + 520), v26);
              *(_BYTE *)(v31 + 280) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v31);
            }
          }
        }
        v18 = *(__int64 **)(v7 + 576);
        for ( i = *(__int64 **)(v7 + 568); i != v18; ++i )
        {
          v24 = *i;
          if ( *(_DWORD *)(*i + 32) )
          {
            for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v24 + 24); j = (unsigned int)(j + 1) )
            {
              v29 = *(_QWORD *)(v24 + 16);
              if ( *(_QWORD *)(v29 + 8 * j) == -1LL )
                *(_QWORD *)(v29 + 8 * j) = 0LL;
            }
            *(_DWORD *)(v24 + 28) += *(_DWORD *)(v24 + 32);
            *(_DWORD *)(v24 + 32) = 0;
          }
        }
        if ( v2 )
          CD3DDeviceLevel1::ProcessUnpinResources((CD3DDeviceLevel1 *)v7);
        v20 = *(_QWORD **)(v7 + 920);
        while ( v20 != (_QWORD *)(v7 + 920) )
        {
          v32 = (CD3DResourceSourceReference *)(v20 - 2);
          v33 = v20;
          v20 = (_QWORD *)*v20;
          if ( (int)--*((_DWORD *)v32 + 2) <= 0 )
          {
            v34 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 || (v35 = (_QWORD *)v33[1], (_QWORD *)*v35 != v33) )
              __fastfail(3u);
            *v35 = v34;
            *(_QWORD *)(v34 + 8) = v35;
            CD3DResourceSourceReference::`scalar deleting destructor'(v32, (unsigned int)v35);
          }
        }
        if ( *(_QWORD *)(v7 + 632) )
        {
          for ( k = InterlockedFlushSList((PSLIST_HEADER)(v7 + 880));
                k;
                k = InterlockedFlushSList((PSLIST_HEADER)(v7 + 880)) )
          {
            do
            {
              Next = k->Next;
              CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v7 + 864), (struct CD3DResource *)&k[-3]);
              k = Next;
            }
            while ( Next );
          }
        }
        if ( *(_QWORD *)(v7 + 1016) == v6 )
        {
          v4 = 0;
        }
        else
        {
          CAtlasManager::CompactAtlases((CAtlasManager *)(v7 + 568));
          v4 = 1;
        }
        v2 = a2;
      }
      if ( *(_BYTE *)(v7 + 1028) )
      {
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v7);
      }
      else if ( !v4 )
      {
        goto LABEL_30;
      }
      if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 632) + 312LL))(*(_QWORD *)(v7 + 632)) < 0 )
      {
        if ( *(int *)(v7 + 848) < 0 )
        {
LABEL_75:
          CD3DDeviceLevel1::ProcessDeviceLost((CD3DDeviceLevel1 *)v7);
          continue;
        }
        *(_DWORD *)(v7 + 848) = -2003304307;
      }
LABEL_30:
      if ( *(int *)(v7 + 848) < 0 )
        goto LABEL_75;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v3);
    }
    while ( (_DWORD)v3 );
  }
  v22 = dword_180308AD8;
  if ( dword_180308AD8 )
  {
    do
    {
      if ( v22 <= (unsigned int)qword_180308B10 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, --v22);
    }
    while ( v22 );
  }
  LeaveCriticalSection(&CriticalSection);
  return 0LL;
}

/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801CD3F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801CB884 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x1801CB8C0 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801CC678 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x1801CD6C0 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  char *v6; // rbx
  CResourceTable *v7; // r8
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // r9d
  int v13; // ebp
  struct CResource *ResourceWithoutType; // rsi
  __int64 v15; // rbx
  _DWORD *v16; // rax
  unsigned int *v17; // r14
  unsigned int v18; // edx
  char *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edi
  signed int v24; // eax
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-48h]
  char *v30; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0x2BDu, 0LL);
    goto LABEL_43;
  }
  v10 = a5;
  v11 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( a4 )
    {
      v13 = 0;
      if ( (_DWORD)v5 )
      {
        while ( 1 )
        {
          ResourceWithoutType = 0LL;
          v15 = 0LL;
          if ( *((int *)this + 38) <= 0 )
          {
LABEL_12:
            v15 = -1LL;
          }
          else
          {
            v16 = (_DWORD *)*((_QWORD *)this + 17);
            while ( *v16 != a4[7 * v13] )
            {
              ++v15;
              ++v16;
              if ( v15 >= *((int *)this + 38) )
                goto LABEL_12;
            }
          }
          v6 = v15 == -1 ? 0LL : *(char **)(*((_QWORD *)this + 18) + 8 * v15);
          v17 = &a4[7 * v13];
          if ( (v17[6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 136,
              *v17,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
LABEL_35:
            v7 = a2;
          }
          v6 = 0LL;
          if ( (unsigned int)++v13 >= *((_DWORD *)a3 + 3) )
            goto LABEL_43;
        }
        v18 = v17[1];
        if ( v18 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v18);
          if ( !ResourceWithoutType )
          {
            v27 = 734;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, *((struct CResource **)v6 + 3));
          v22 = *((_QWORD *)v6 + 3);
          v23 = v17[6];
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          *((_QWORD *)v6 + 3) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          *(_DWORD *)v6 = v23;
          *(_OWORD *)(v6 + 4) = *(_OWORD *)(v17 + 2);
        }
        else
        {
          v19 = (char *)operator new(0x20uLL);
          v6 = v19;
          if ( v19 )
          {
            v10 = v17[6];
            *(_DWORD *)v19 = v10;
            v20 = *(_OWORD *)(v17 + 2);
            *((_QWORD *)v19 + 3) = ResourceWithoutType;
            *(_OWORD *)(v19 + 4) = v20;
            if ( ResourceWithoutType )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          }
          else
          {
            v6 = 0LL;
          }
          v30 = v6;
          if ( !v6 )
          {
            v12 = -2147024882;
            v27 = 741;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 136,
                                &a4[7 * v13],
                                &v30) )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, 0x8007000E, 0x2E8u, 0LL);
            v6 = v30;
            goto LABEL_44;
          }
          v6 = v30;
        }
        v24 = CResource::RegisterNotifier(this, *((struct CResource **)v6 + 3));
        v11 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x2FAu, 0LL);
          goto LABEL_43;
        }
        goto LABEL_35;
      }
    }
LABEL_43:
    if ( v11 >= 0 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v27 = 705;
LABEL_4:
  v12 = -2003303421;
LABEL_5:
  v11 = v12;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, v27, 0LL);
LABEL_44:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_45:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
  return (unsigned int)v11;
}

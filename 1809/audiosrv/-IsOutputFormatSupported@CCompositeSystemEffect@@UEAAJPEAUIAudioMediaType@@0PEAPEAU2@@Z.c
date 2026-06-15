/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180111790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F0AC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180107AEC (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180110C60 (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v4; // eax
  int v6; // ecx
  int v9; // r14d
  int v10; // esi
  bool v11; // cf
  int v12; // eax
  unsigned int v13; // r12d
  struct IAudioMediaType *v14; // rbx
  char *v15; // rsi
  int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  int v20; // esi
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rax
  struct IAudioMediaType *v31; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  int v34; // [rsp+48h] [rbp-31h]
  __int64 v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h] BYREF
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  __int64 v38; // [rsp+68h] [rbp-11h] BYREF
  struct IAudioMediaType *v39; // [rsp+70h] [rbp-9h] BYREF
  int v40; // [rsp+78h] [rbp-1h]
  unsigned int v41; // [rsp+7Ch] [rbp+3h]
  char *v42; // [rsp+80h] [rbp+7h]
  __int64 v43[9]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v45; // [rsp+E0h] [rbp+67h] BYREF
  struct IAudioMediaType *v46; // [rsp+E8h] [rbp+6Fh]
  unsigned int v47; // [rsp+F0h] [rbp+77h]
  struct IAudioMediaType **v48; // [rsp+F8h] [rbp+7Fh]

  v48 = a4;
  v46 = a2;
  v4 = *((_DWORD *)this + 10);
  v6 = *((_DWORD *)this + 18);
  if ( v4 )
  {
    v9 = v6 - 1;
    v10 = -1;
  }
  else
  {
    v9 = 0;
    v10 = v6;
  }
  v11 = v4 != 0;
  v34 = v10;
  v12 = *((_DWORD *)this + 9);
  v13 = 1;
  v14 = a3;
  v31 = a3;
  v41 = v11 ? -1 : 1;
  v40 = v12 != 0 ? v6 - 1 : 0;
  v47 = v10 - v41;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v31);
  v43[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v43);
  v33 = 0LL;
  if ( v9 != v10 )
  {
    v15 = (char *)this + 64;
    v16 = -2005073917;
    v42 = (char *)this + 64;
    while ( 1 )
    {
      v39 = v14;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v39);
      v17 = (__int64)v46;
      if ( v9 != v40 )
        v17 = (__int64)v14;
      v37 = v17;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v37);
      v36 = 0LL;
      v18 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                         (__int64)v15,
                         v9);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v18 + 64LL))(
              v18,
              v17,
              v14,
              &v36);
      v20 = v19;
      if ( v19 == -2005073917 )
      {
        v15 = v42;
        v38 = 0LL;
        v45 = 0;
        v22 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)v42,
                          v9);
        if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v22, &v38) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v45) >= 0
          && (v45 & 1) != 0 )
        {
          v35 = 0LL;
          v23 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v15,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v23 + 56LL))(
                  v23,
                  0LL,
                  v17,
                  &v35);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              1045LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v24);
            v16 = v25;
LABEL_35:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
LABEL_36:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
            goto LABEL_38;
          }
          v32 = 0LL;
          v26 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v15,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v26 + 64LL))(
                  v26,
                  v35,
                  v35,
                  &v32);
          v28 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              1049LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v27);
            v16 = v28;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
            goto LABEL_35;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v31, &v32);
          if ( v9 == v47 )
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v33, &v32);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          v14 = v31;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
      }
      else
      {
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            if ( v19 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                1062LL,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v19);
            v16 = v20;
            goto LABEL_36;
          }
          if ( v9 != v47 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              1022LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x887D0003LL);
            goto LABEL_36;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v33, &v36);
          v21 = &v33;
        }
        else
        {
          v21 = (__int64 *)&v39;
        }
        if ( v17 )
          v21 = &v37;
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v31, v21);
        v14 = v31;
        v15 = v42;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
      v9 += v41;
      if ( v9 == v34 )
      {
        v29 = v33;
        if ( !v33 )
          break;
        v33 = 0LL;
        *v48 = (struct IAudioMediaType *)v29;
        goto LABEL_39;
      }
    }
  }
  *v48 = a3;
  ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
  v16 = 0;
LABEL_38:
  v13 = v16;
LABEL_39:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v43);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v31);
  return v13;
}

/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18011D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007820 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180062C00 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18011571C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011D448 (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  struct IAudioMediaType *v5; // rsi
  int v6; // ecx
  int v8; // eax
  int v9; // r14d
  unsigned int v10; // r12d
  int v11; // r13d
  bool v12; // zf
  int v13; // ebx
  const struct tWAVEFORMATEX *v14; // rax
  __int64 v15; // rbx
  char *v16; // rsi
  int v17; // r15d
  struct IAudioMediaType *v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  int v21; // esi
  __int64 *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // ebx
  struct IAudioMediaType *v30; // rax
  struct IAudioMediaType *v32; // [rsp+38h] [rbp-49h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v34; // [rsp+48h] [rbp-39h] BYREF
  int v35; // [rsp+50h] [rbp-31h]
  int v36; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h] BYREF
  struct IAudioMediaType *v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  int v42; // [rsp+80h] [rbp-1h]
  char *v43; // [rsp+88h] [rbp+7h]
  __int64 v44[9]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v46; // [rsp+E8h] [rbp+67h]

  v5 = a3;
  v6 = *((_DWORD *)this + 10);
  v8 = *((_DWORD *)this + 18);
  if ( v6 )
  {
    v46 = -1;
    v9 = v8 - 1;
  }
  else
  {
    v9 = 0;
    v46 = *((_DWORD *)this + 18);
  }
  v10 = 1;
  v11 = v9;
  v12 = *((_DWORD *)this + 9) == 0;
  v42 = v6 != 0 ? -1 : 1;
  if ( v12 )
  {
    v35 = 0;
  }
  else
  {
    v13 = v8 - 1;
    v35 = v8 - 1;
    if ( *((_DWORD *)this + 9) == 1 )
    {
      v14 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(v14) == 1 )
        v11 = v13;
    }
  }
  v15 = (__int64)v5;
  v32 = v5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v32);
  v44[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v44);
  v34 = 0LL;
  if ( v9 != v46 )
  {
    v16 = (char *)this + 64;
    v17 = -2005073917;
    v43 = (char *)this + 64;
    while ( 1 )
    {
      v41 = v15;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v41);
      v18 = a2;
      if ( v9 != v35 )
        v18 = (struct IAudioMediaType *)v15;
      v39 = v18;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v39);
      v38 = 0LL;
      v19 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                         (__int64)v16,
                         v9);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
      v20 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64, __int64 *))(*(_QWORD *)v19 + 56LL))(
              v19,
              v18,
              v15,
              &v38);
      v21 = v20;
      if ( v20 == -2005073917 )
      {
        v16 = v43;
        v40 = 0LL;
        v36 = 0;
        v23 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)v43,
                          v9);
        if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v23, &v40) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v36) >= 0
          && (v36 & 1) != 0 )
        {
          v33 = 0LL;
          v24 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v16,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 56LL))(
                  v24,
                  0LL,
                  v15,
                  &v33);
          v26 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x399,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v25);
            v17 = v26;
LABEL_40:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
LABEL_41:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
            goto LABEL_44;
          }
          if ( v9 == v11 )
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v34, &v33);
          v37 = 0LL;
          v27 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v16,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v27 + 64LL))(
                  v27,
                  v33,
                  v33,
                  &v37);
          v29 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3A3,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v28);
            v17 = v29;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
            goto LABEL_40;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v32, &v37);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
          v15 = (__int64)v32;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
      }
      else
      {
        if ( v20 )
        {
          if ( v20 != 1 )
          {
            if ( v20 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3AA,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v20);
            v17 = v21;
            goto LABEL_41;
          }
          if ( v9 != v11 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x381,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x887D0003LL);
            goto LABEL_41;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v34, &v38);
          v22 = (__int64 *)&v34;
        }
        else
        {
          v22 = &v41;
        }
        if ( v18 )
          v22 = (__int64 *)&v39;
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v32, v22);
        v15 = (__int64)v32;
        v16 = v43;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
      v9 += v42;
      if ( v9 == v46 )
      {
        v30 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          *a4 = v30;
          goto LABEL_45;
        }
        v5 = a3;
        break;
      }
    }
  }
  *a4 = v5;
  ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->AddRef)(v5);
  v17 = 0;
LABEL_44:
  v10 = v17;
LABEL_45:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v44);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
  return v10;
}

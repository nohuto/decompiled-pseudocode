/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180110E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180107AEC (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Add@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAHAEBQEAUtWAVEFORMATEX@@@Z @ 0x1801088AC (-Add@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x180110D08 (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v4; // edi
  void *v5; // rbx
  int v9; // esi
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  SIZE_T v13; // rbx
  struct _GUID *v14; // r13
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r14
  struct _GUID *v18; // rcx
  unsigned __int64 v19; // rsi
  int v21; // [rsp+30h] [rbp-30h]
  unsigned int v22; // [rsp+34h] [rbp-2Ch]
  void *Src; // [rsp+38h] [rbp-28h] BYREF
  void *v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+4Ch] [rbp-14h]
  void *Block; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+5Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v31; // [rsp+A8h] [rbp+48h] BYREF
  void *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v24 = 0LL;
  v4 = 0;
  v25 = 0;
  v5 = a4;
  v26 = 0;
  Block = 0LL;
  v28 = 0;
  v29 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v9 = 0;
    *a3 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      do
      {
        v10 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)this + 72,
                          v9);
        v11 = (*(__int64 (__fastcall **)(_QWORD, void **, int *, void *))(*(_QWORD *)*v10 + 24LL))(*v10, &Src, &v31, v5);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            1098LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v11);
          goto LABEL_30;
        }
        ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::Add((__int64)&v24, &Src);
        ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add((__int64)&Block, &v31);
        v4 += v31;
        ++v9;
        v5 = v32;
      }
      while ( v9 < *((_DWORD *)this + 20) );
      if ( v4 )
      {
        v13 = 16LL * v4;
        v14 = (struct _GUID *)CoTaskMemAlloc(v13);
        if ( !v14 )
        {
          v12 = -2147024882;
          goto LABEL_30;
        }
        v15 = 0;
        v16 = 0;
        v31 = 0;
        v21 = 0;
        if ( v25 > 0 )
        {
          v17 = 0LL;
          while ( 1 )
          {
            if ( v17 < 0 || (Src = (void *)*((_QWORD *)v24 + v17), v16 >= v28) )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              __debugbreak();
            }
            v18 = &v14[v15];
            v22 = *((_DWORD *)Block + v17);
            v19 = 16LL * v22;
            if ( v19 )
            {
              if ( !v18 )
                goto LABEL_15;
              if ( Src && v13 >= v19 )
              {
                memcpy_0(v18, Src, 16LL * v22);
                goto LABEL_23;
              }
              memset_0(v18, 0, v13);
              if ( Src )
              {
                if ( v13 >= v19 )
                  goto LABEL_23;
                *(_DWORD *)_o__errno(v18) = 34;
              }
              else
              {
LABEL_15:
                *(_DWORD *)_o__errno(v18) = 22;
              }
              invalid_parameter_noinfo();
            }
LABEL_23:
            v13 -= v19;
            v31 += v22;
            CoTaskMemFree(Src);
            ++v17;
            v16 = v21 + 1;
            v21 = v16;
            if ( v16 >= v25 )
              break;
            v15 = v31;
          }
        }
        *a2 = v14;
        *a3 = v4;
      }
    }
    v12 = 0;
  }
  else
  {
    v12 = -2147467261;
  }
LABEL_30:
  if ( Block )
    free(Block);
  if ( v24 )
    free(v24);
  return v12;
}

/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C016B34C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkInitializeBlockList @ 0x1C016B748 (DxgkInitializeBlockList.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C01783DC (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  _DWORD **v1; // rdi
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rsi
  int v7; // eax
  const wchar_t *v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  const wchar_t *v12; // rcx
  wchar_t *v13; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-39h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  int v16; // [rsp+50h] [rbp-21h]
  const wchar_t *v17; // [rsp+58h] [rbp-19h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-11h]
  int v19; // [rsp+68h] [rbp-9h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  int v21; // [rsp+78h] [rbp+7h]
  __int64 v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+88h] [rbp+17h]
  _BYTE v24[40]; // [rsp+90h] [rbp+1Fh] BYREF
  int Key; // [rsp+D8h] [rbp+67h] BYREF

  v1 = (_DWORD **)((char *)this + 2456);
  DxgkInitializeBlockList(*((_QWORD *)this + 24), *((unsigned int *)this + 546), (char *)this + 2456);
  if ( (**v1 & 0x80u) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
  v3 = *((_DWORD *)this + 546);
  if ( v3 != 8704 )
  {
LABEL_6:
    v4 = v3;
    if ( v3 < 0x2000 || v3 >= 9216 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( (*((_DWORD *)this + 77) & 0x200) != 0 )
  {
    *((_BYTE *)this + 2501) = 1;
    goto LABEL_6;
  }
LABEL_8:
  v5 = *((_DWORD *)this + 71);
  if ( v5 == 32902 || (v4 = v3, v5 == 4098) )
  {
    **v1 |= 0x40u;
    v4 = *((_DWORD *)this + 546);
  }
LABEL_11:
  v6 = -1LL;
  if ( v4 >= 0x2000 )
  {
    v7 = *((_DWORD *)this + 71);
    if ( v7 == 4098 || v7 == 4318 )
    {
      *((_DWORD *)this + 477) |= 0x40u;
    }
    else if ( v7 == 32902 && (*((_DWORD *)this + 477) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 72);
      if ( bsearch(&Key, &unk_1C006FCD0, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v8 = (const wchar_t *)*((_QWORD *)this + 185);
        if ( v8 )
        {
          v9 = wcsrchr(v8, 0x2Eu);
          if ( v9 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v9[v10] );
            if ( v10 == 5 && xwtol(v9 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 477) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( *((int *)this + 546) >= 9216 )
    *((_DWORD *)this + 477) |= 8u;
  if ( *((_DWORD *)this + 71) == 1297040209 )
  {
    v11 = *((_DWORD *)this + 613);
    if ( v11 <= 2000 )
    {
      **v1 |= 0x10u;
      v17 = L"PhoneSOCVersion";
      *(_QWORD *)&UnicodeString.Length = 0LL;
      p_UnicodeString = &UnicodeString;
      UnicodeString.Buffer = 0LL;
      v15 = 0LL;
      v16 = 292;
      v19 = 16777217;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      v23 = 0;
      memset(v24, 0, sizeof(v24));
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v15,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
      v11 = *((_DWORD *)this + 613);
    }
    if ( v11 <= 1300 )
    {
      **v1 |= 1u;
      **v1 |= 2u;
      **v1 |= 8u;
    }
    if ( *((_DWORD *)this + 546) == 4608 )
      **v1 |= 4u;
    if ( *((_DWORD *)this + 72) == 1161245232 )
    {
      if ( *((_DWORD *)this + 73) != 810570829
        || *((_DWORD *)this + 74) != 808794160
        || *((_DWORD *)this + 75) != 124
        || (**v1 |= 0x800u, **v1 |= 0x1000u, *((_DWORD *)this + 72) == 1161245232) )
      {
        if ( *((_DWORD *)this + 73) == 810434888 && *((_DWORD *)this + 74) == 808794160 && *((_DWORD *)this + 75) == 124 )
          **v1 |= 0x2000u;
      }
    }
  }
  if ( (**v1 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2388) = 0;
    *((_DWORD *)this + 598) = 1;
    *((_BYTE *)this + 2493) = 0;
    *((_BYTE *)this + 2497) = 0;
    *((_BYTE *)this + 2495) = 0;
  }
  if ( *((int *)this + 546) <= 9216 && *((_DWORD *)this + 71) == 32902 )
  {
    v12 = (const wchar_t *)*((_QWORD *)this + 185);
    if ( v12 )
    {
      v13 = wcsrchr(v12, 0x2Eu);
      if ( v13 )
      {
        do
          ++v6;
        while ( v13[v6] );
        if ( v6 == 5 && xwtol(v13 + 1) - 1 <= 0x17F6 )
          **v1 |= 0x4000u;
      }
    }
  }
}

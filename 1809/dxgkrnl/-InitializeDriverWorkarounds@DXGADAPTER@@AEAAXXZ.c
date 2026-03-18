/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0150138
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DxgkInitializeDriverWorkarounds @ 0x1C0022BB0 (DxgkInitializeDriverWorkarounds.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150524 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C021C250 (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  int **v1; // rdi
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rsi
  int v7; // eax
  const wchar_t *v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  enum _QAI_DRIVERVERSION DriverVersion; // eax
  DXGADAPTER *v12; // rcx
  int v13; // edx
  const wchar_t *v14; // rcx
  wchar_t *v15; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  int v18; // [rsp+50h] [rbp-21h]
  const wchar_t *v19; // [rsp+58h] [rbp-19h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-11h]
  int v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  int v25; // [rsp+88h] [rbp+17h]
  _BYTE v26[40]; // [rsp+90h] [rbp+1Fh] BYREF
  int Key; // [rsp+D8h] [rbp+67h] BYREF

  v1 = (int **)((char *)this + 4112);
  DxgkInitializeDriverWorkarounds(*((_QWORD *)this + 24), (_QWORD *)this + 514);
  v3 = *((_DWORD *)this + 540);
  if ( v3 == 8704 && (*((_DWORD *)this + 77) & 0x200) != 0 )
    *((_BYTE *)this + 2469) = 1;
  v4 = v3;
  if ( v3 >= 0x2000 && v3 < 9216 )
  {
    v5 = *((_DWORD *)this + 71);
    if ( v5 == 32902 || v5 == 4098 )
    {
      **v1 |= 0x40u;
      v4 = *((_DWORD *)this + 540);
    }
  }
  v6 = -1LL;
  if ( v4 >= 0x2000 )
  {
    v7 = *((_DWORD *)this + 71);
    if ( v7 == 4098 || v7 == 4318 )
    {
      *((_DWORD *)this + 471) |= 0x40u;
    }
    else if ( v7 == 32902 && (*((_DWORD *)this + 471) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 72);
      if ( bsearch(&Key, &unk_1C0068570, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v8 = (const wchar_t *)*((_QWORD *)this + 183);
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
              *((_DWORD *)this + 471) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( *((int *)this + 540) >= 9216 )
    *((_DWORD *)this + 471) |= 8u;
  if ( *((_DWORD *)this + 71) == 1297040209 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2000 )
    {
      **v1 |= 0x10u;
      v19 = L"PhoneSOCVersion";
      *(_DWORD *)&UnicodeString.Length = 0;
      p_UnicodeString = &UnicodeString;
      UnicodeString.Buffer = 0LL;
      v17 = 0LL;
      v18 = 292;
      v21 = 16777217;
      v22 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v25 = 0;
      memset(v26, 0, sizeof(v26));
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v17,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 1300 )
    {
      **v1 |= 1u;
      **v1 |= 2u;
      **v1 |= 8u;
    }
    if ( *((_DWORD *)this + 540) == 4608 )
      **v1 |= 4u;
    if ( *((_DWORD *)this + 72) == 1161245232
      && *((_DWORD *)this + 73) == 810570829
      && *((_DWORD *)this + 74) == 808794160
      && *((_DWORD *)this + 75) == 124 )
    {
      **v1 |= 0x800u;
      **v1 |= 0x1000u;
    }
  }
  DriverVersion = (unsigned int)DXGADAPTER::GetDriverVersion(this);
  DXGADAPTER::CheckBlockList(
    v12,
    *((_DWORD *)this + 71),
    *((_DWORD *)this + 72),
    *((const unsigned __int16 **)this + 183),
    DriverVersion);
  v13 = **v1;
  if ( (v13 & 0x80u) != 0 )
  {
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
    v13 = **v1;
  }
  if ( (v13 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2364) = 0;
    *((_DWORD *)this + 592) = 1;
    *((_BYTE *)this + 2461) = 0;
    *((_BYTE *)this + 2465) = 0;
    *((_BYTE *)this + 2463) = 0;
  }
  if ( *((int *)this + 540) <= 9216 && *((_DWORD *)this + 71) == 32902 )
  {
    v14 = (const wchar_t *)*((_QWORD *)this + 183);
    if ( v14 )
    {
      v15 = wcsrchr(v14, 0x2Eu);
      if ( v15 )
      {
        do
          ++v6;
        while ( v15[v6] );
        if ( v6 == 5 && xwtol(v15 + 1) - 1 <= 0x17F6 )
          **v1 |= 0x4000u;
      }
    }
  }
}

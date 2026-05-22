/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x180148804
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180148680 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180148750 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180149570 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CAX_.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r9
  _BYTE v10[4]; // [rsp+30h] [rbp-89h] BYREF
  int v11; // [rsp+34h] [rbp-85h] BYREF
  __int16 v12; // [rsp+38h] [rbp-81h] BYREF
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  int v15; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v16; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  int v19; // [rsp+68h] [rbp-51h]
  _QWORD v20[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v21[96]; // [rsp+80h] [rbp-39h] BYREF

  v13 = 0LL;
  v16 = 0LL;
  if ( a2 >= 0x22u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_71;
  v11 = 0;
  v20[0] = -1LL;
  v20[1] = -1LL;
  v17 = 0LL;
  v12 = 0;
  v10[0] = 0;
  v14 = 0;
  memset_0(v21, 0, 0x54uLL);
  v18 = 0LL;
  v19 = 0;
  v15 = -1;
  if ( a2 > 0x12u )
  {
    if ( a2 > 0x1Au )
    {
      switch ( a2 )
      {
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1054LL;
            goto LABEL_29;
          }
          break;
        case 0x1Cu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 256LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1001LL;
            goto LABEL_29;
          }
          break;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1064LL;
            goto LABEL_29;
          }
          break;
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 &v12);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1069LL;
            goto LABEL_29;
          }
          break;
        case 0x1Fu:
          wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::ReportUsageToService();
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 280LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1076LL;
            goto LABEL_29;
          }
          break;
        case 0x20u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 288LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1082LL;
            goto LABEL_29;
          }
          break;
        case 0x21u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 983LL;
            goto LABEL_29;
          }
          break;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1059LL;
            goto LABEL_29;
          }
          break;
        case 0x13u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 959LL;
            goto LABEL_29;
          }
          break;
        case 0x14u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 965LL;
            goto LABEL_29;
          }
          break;
        case 0x15u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 971LL;
            goto LABEL_29;
          }
          break;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v21);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 914LL;
            goto LABEL_29;
          }
          break;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v16);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 920LL;
            goto LABEL_29;
          }
          break;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 977LL;
            goto LABEL_29;
          }
          break;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_72;
            v8 = 1049LL;
            goto LABEL_29;
          }
          break;
      }
    }
    goto LABEL_134;
  }
  if ( a2 == 18 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v11);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_72;
      v8 = 950LL;
      goto LABEL_29;
    }
    if ( *((_DWORD *)this + 23) != v11 )
      goto LABEL_134;
LABEL_71:
    v7 = 0;
    goto LABEL_72;
  }
  if ( a2 > 7u )
  {
    switch ( a2 )
    {
      case 8u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), v20);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 989LL;
          goto LABEL_29;
        }
        break;
      case 9u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 104LL))(*((_QWORD *)this + 5), v20);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 1007LL;
          goto LABEL_29;
        }
        break;
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 995LL;
          goto LABEL_29;
        }
        break;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 944LL;
          goto LABEL_29;
        }
        break;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 1034LL;
          goto LABEL_29;
        }
        break;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 1039LL;
          goto LABEL_29;
        }
        break;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v18);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_72;
          v8 = 1044LL;
          goto LABEL_29;
        }
        break;
    }
    goto LABEL_134;
  }
  switch ( a2 )
  {
    case 7u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1013LL;
        goto LABEL_29;
      }
      goto LABEL_134;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1019LL;
        goto LABEL_29;
      }
      goto LABEL_134;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1024LL;
        goto LABEL_29;
      }
      goto LABEL_134;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 908LL;
          goto LABEL_29;
        }
        goto LABEL_72;
      }
      goto LABEL_134;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 926LL;
          goto LABEL_29;
        }
        goto LABEL_72;
      }
      goto LABEL_134;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 932LL;
          goto LABEL_29;
        }
        goto LABEL_72;
      }
      goto LABEL_134;
  }
  if ( a2 != 5 )
  {
    if ( a2 == 6 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1029LL;
LABEL_29:
          McTemplateU0sqq(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
          goto LABEL_72;
        }
        goto LABEL_72;
      }
    }
LABEL_134:
    switch ( a2 )
    {
      case 0u:
      case 2u:
      case 5u:
      case 6u:
      case 7u:
      case 0xAu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x12u:
      case 0x1Bu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v11,
               4LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1110LL;
        break;
      case 1u:
      case 3u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v13,
               8LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1163LL;
        break;
      case 4u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v15,
               4LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1222LL;
        break;
      case 8u:
      case 9u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               v20,
               16LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1204LL;
        break;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v18,
               12LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1213LL;
        break;
      case 0x13u:
      case 0x14u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Du:
      case 0x20u:
      case 0x21u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               v10,
               1LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1144LL;
        break;
      case 0x15u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v14,
               4LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1153LL;
        break;
      case 0x16u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               v21,
               84LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1194LL;
        break;
      case 0x17u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v16,
               8LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1185LL;
        break;
      case 0x1Cu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v17,
               8LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1128LL;
        break;
      case 0x1Eu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v12,
               2LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1119LL;
        break;
      case 0x1Fu:
        wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::ReportUsageToService();
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               a2,
               &v13,
               8LL);
        v7 = v4;
        if ( v4 >= 0 )
          goto LABEL_71;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_72;
        v8 = 1175LL;
        break;
      default:
        goto LABEL_71;
    }
    goto LABEL_29;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v11);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_134;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 938LL;
    goto LABEL_29;
  }
LABEL_72:
  MsgRelease(v13);
  MsgRelease(v16);
  return v7;
}

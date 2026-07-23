/*
 * XREFs of _PnpCtxGetCachedNodeBaseKey @ 0x1405C8CAC
 * Callers:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x1408F703C (_PnpCtxOpenContextNodeBaseKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x1406BD888 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegCreateTree @ 0x1406D47E8 (_SysCtxRegCreateTree.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 */

__int64 __fastcall PnpCtxGetCachedNodeBaseKey(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int Tree; // r14d
  void *EnumSecurityDescriptor; // r13
  __int64 v8; // r10
  unsigned int v9; // esi
  int v10; // r11d
  __int64 v11; // rax
  __int64 v13; // rdx
  int CachedContextBaseKey; // eax
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  const wchar_t *v19; // r15
  int v20; // ecx
  int v21; // ecx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  __int64 v26; // rax
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ecx
  int v31; // ebx
  __int64 v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+58h] [rbp-8h] BYREF
  _QWORD *v34; // [rsp+A8h] [rbp+48h]

  v34 = a4;
  Tree = 0;
  EnumSecurityDescriptor = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v8 = a1;
  v9 = 4;
  v10 = 1;
  if ( a3 > 8 )
  {
    switch ( a3 )
    {
      case 9:
        v32 = a2[12];
        goto LABEL_18;
      case 10:
        v11 = a2[13];
        break;
      case 11:
        v11 = a2[14];
        break;
      case 12:
        v11 = a2[15];
        break;
      case 13:
        v11 = a2[16];
        break;
      case 14:
        v11 = a2[17];
        break;
      case 15:
        v11 = a2[18];
        break;
      default:
        return (unsigned int)-1073741811;
    }
LABEL_9:
    v32 = v11;
    goto LABEL_10;
  }
  switch ( a3 )
  {
    case 8:
      v11 = a2[11];
      goto LABEL_9;
    case 1:
      v13 = 1LL;
      break;
    case 2:
      v13 = 2LL;
      break;
    case 3:
      v13 = 3LL;
      break;
    case 4:
      v13 = 4LL;
      break;
    default:
      switch ( a3 )
      {
        case 5:
          v11 = a2[8];
          break;
        case 6:
          v11 = a2[9];
          break;
        case 7:
          v11 = a2[10];
          break;
        default:
          return (unsigned int)-1073741811;
      }
      goto LABEL_9;
  }
  CachedContextBaseKey = SysCtxGetCachedContextBaseKey(a2[7], v13, &v32);
  a4 = v34;
  Tree = CachedContextBaseKey;
LABEL_18:
  if ( Tree < 0 )
    return (unsigned int)Tree;
LABEL_10:
  if ( v32 )
  {
    *a4 = v32;
    return (unsigned int)Tree;
  }
  if ( a3 < 5 )
    Tree = -1073741811;
  if ( Tree >= 0 )
  {
    if ( a3 > 10 )
    {
      if ( a3 == 11 )
      {
        v19 = L"Control\\DevicePanels";
        goto LABEL_48;
      }
      v20 = a3 - 11 - v10;
      if ( !v20 )
      {
        v19 = L"Control\\CriticalDeviceDatabase";
        goto LABEL_48;
      }
      v21 = v20 - v10;
      if ( !v21 )
      {
        v19 = L"Control\\CoDeviceInstallers";
        goto LABEL_48;
      }
      v30 = v21 - v10;
      if ( !v30 )
      {
        v19 = L"Hardware Profiles";
        goto LABEL_48;
      }
      if ( v30 == v10 )
      {
        v9 = v10;
        v19 = L"HardwareConfig";
        goto LABEL_48;
      }
    }
    else
    {
      if ( a3 == 10 )
      {
        v19 = L"Control\\DeviceContainers";
        goto LABEL_48;
      }
      v15 = (unsigned int)(a3 - 5);
      if ( a3 == 5 )
      {
        v19 = L"Enum";
        EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor(v15);
        if ( !EnumSecurityDescriptor )
          return (unsigned int)-1073741595;
LABEL_48:
        Tree = SysCtxGetCachedContextBaseKey(a2[7], v9, &v33);
        if ( Tree >= 0 )
        {
          Tree = SysCtxRegCreateTree(a2[7], v33, v19, 0LL, 0x2000000, 0LL);
          if ( Tree >= 0 )
          {
            if ( a3 > 10 )
            {
              v27 = a3 - 11;
              if ( !v27 )
              {
                v26 = v32;
                a2[14] = v32;
                goto LABEL_61;
              }
              v28 = v27 - 1;
              if ( !v28 )
              {
                v26 = v32;
                a2[15] = v32;
                goto LABEL_61;
              }
              v29 = v28 - 1;
              if ( !v29 )
              {
                v26 = v32;
                a2[16] = v32;
                goto LABEL_61;
              }
              v31 = v29 - 1;
              if ( !v31 )
              {
                v26 = v32;
                a2[17] = v32;
                goto LABEL_61;
              }
              if ( v31 == 1 )
              {
                v26 = v32;
                a2[18] = v32;
                goto LABEL_61;
              }
            }
            else
            {
              if ( a3 == 10 )
              {
                v26 = v32;
                a2[13] = v32;
                goto LABEL_61;
              }
              v22 = a3 - 5;
              if ( !v22 )
              {
                v26 = v32;
                a2[8] = v32;
                goto LABEL_61;
              }
              v23 = v22 - 1;
              if ( !v23 )
              {
                v26 = v32;
                a2[9] = v32;
                goto LABEL_61;
              }
              v24 = v23 - 1;
              if ( !v24 )
              {
                v26 = v32;
                a2[10] = v32;
                goto LABEL_61;
              }
              v25 = v24 - 1;
              if ( !v25 )
              {
                v26 = v32;
                a2[11] = v32;
LABEL_61:
                *v34 = v26;
                goto LABEL_62;
              }
              if ( v25 == 1 )
              {
                v26 = v32;
                a2[12] = v32;
                goto LABEL_61;
              }
            }
            Tree = -1073741811;
          }
        }
LABEL_62:
        if ( EnumSecurityDescriptor )
          ExFreePoolWithTag(EnumSecurityDescriptor, 0);
        return (unsigned int)Tree;
      }
      v16 = v15 - v10;
      if ( !v16 )
      {
        v19 = L"Services";
        goto LABEL_48;
      }
      v17 = v16 - v10;
      if ( !v17 )
      {
        v19 = L"Control\\Class";
        goto LABEL_48;
      }
      v18 = v17 - v10;
      if ( !v18 )
      {
        v19 = L"Control\\DeviceClasses";
        goto LABEL_48;
      }
      if ( v18 == v10 )
      {
        v19 = L"Control\\DeviceInterfaces";
        if ( !*(_BYTE *)(v8 + 4) )
          v19 = L"Control\\DeviceClasses";
        goto LABEL_48;
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Tree;
}

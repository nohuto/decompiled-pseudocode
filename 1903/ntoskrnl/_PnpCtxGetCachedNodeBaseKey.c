/*
 * XREFs of _PnpCtxGetCachedNodeBaseKey @ 0x1405C3848
 * Callers:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     PipOpenServiceEnumKeys @ 0x140733E90 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140933A2C (_PnpCtxOpenContextNodeBaseKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x1406DFB60 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegCreateTree @ 0x1406F2718 (_SysCtxRegCreateTree.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
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
  int v15; // ecx
  int v16; // ecx
  const wchar_t *v17; // r15
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ebx
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
  if ( a3 < 5 || a3 > 15 )
    Tree = -1073741811;
  if ( Tree >= 0 )
  {
    if ( a3 > 10 )
    {
      if ( a3 == 11 )
      {
        v17 = L"Control\\DevicePanels";
        goto LABEL_40;
      }
      v15 = a3 - 11 - v10;
      if ( !v15 )
      {
        v17 = L"Control\\CriticalDeviceDatabase";
        goto LABEL_40;
      }
      v16 = v15 - v10;
      if ( !v16 )
      {
        v17 = L"Control\\CoDeviceInstallers";
        goto LABEL_40;
      }
      v30 = v16 - v10;
      if ( !v30 )
      {
        v17 = L"Hardware Profiles";
        goto LABEL_40;
      }
      if ( v30 == v10 )
      {
        v9 = v10;
        v17 = L"HardwareConfig";
        goto LABEL_40;
      }
      return (unsigned int)-1073741811;
    }
    if ( a3 == 10 )
    {
      v17 = L"Control\\DeviceContainers";
      goto LABEL_40;
    }
    v22 = (unsigned int)(a3 - 5);
    if ( a3 == 5 )
    {
      v17 = L"Enum";
      EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor(v22);
      if ( !EnumSecurityDescriptor )
        return (unsigned int)-1073741595;
    }
    else
    {
      v23 = v22 - v10;
      if ( !v23 )
      {
        v17 = L"Services";
        goto LABEL_40;
      }
      v24 = v23 - v10;
      if ( !v24 )
      {
        v17 = L"Control\\Class";
        goto LABEL_40;
      }
      v25 = v24 - v10;
      if ( !v25 )
      {
        v17 = L"Control\\DeviceClasses";
        goto LABEL_40;
      }
      if ( v25 != v10 )
        return (unsigned int)-1073741811;
      v17 = L"Control\\DeviceInterfaces";
      if ( !*(_BYTE *)(v8 + 4) )
        v17 = L"Control\\DeviceClasses";
    }
LABEL_40:
    Tree = SysCtxGetCachedContextBaseKey(a2[7], v9, &v33);
    if ( Tree >= 0 )
    {
      Tree = SysCtxRegCreateTree(a2[7], v33, v17, 0LL, 0x2000000, 0LL);
      if ( Tree >= 0 )
      {
        if ( a3 <= 10 )
        {
          if ( a3 == 10 )
          {
            v21 = v32;
            a2[13] = v32;
            goto LABEL_47;
          }
          v26 = a3 - 5;
          if ( !v26 )
          {
            v21 = v32;
            a2[8] = v32;
            goto LABEL_47;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            v21 = v32;
            a2[9] = v32;
            goto LABEL_47;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            v21 = v32;
            a2[10] = v32;
            goto LABEL_47;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            v21 = v32;
            a2[11] = v32;
            goto LABEL_47;
          }
          if ( v29 == 1 )
          {
            v21 = v32;
            a2[12] = v32;
            goto LABEL_47;
          }
        }
        else
        {
          v18 = a3 - 11;
          if ( !v18 )
          {
            v21 = v32;
            a2[14] = v32;
            goto LABEL_47;
          }
          v19 = v18 - 1;
          if ( !v19 )
          {
            v21 = v32;
            a2[15] = v32;
            goto LABEL_47;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            v21 = v32;
            a2[16] = v32;
LABEL_47:
            *v34 = v21;
            goto LABEL_48;
          }
          v31 = v20 - 1;
          if ( !v31 )
          {
            v21 = v32;
            a2[17] = v32;
            goto LABEL_47;
          }
          if ( v31 == 1 )
          {
            v21 = v32;
            a2[18] = v32;
            goto LABEL_47;
          }
        }
        Tree = -1073741811;
      }
    }
LABEL_48:
    if ( EnumSecurityDescriptor )
      ExFreePoolWithTag(EnumSecurityDescriptor, 0);
  }
  return (unsigned int)Tree;
}

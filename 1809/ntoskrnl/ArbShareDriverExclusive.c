/*
 * XREFs of ArbShareDriverExclusive @ 0x140740494
 * Callers:
 *     ArbFindSuitableRange @ 0x1407405E0 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x1407409C0 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x140740A70 (RtlGetFirstRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  PRTL_RANGE v11; // rdi
  unsigned __int64 Start; // rcx
  unsigned __int64 v13; // rax
  bool v14; // cf
  unsigned __int8 Attributes; // dl
  struct _DEVICE_OBJECT *Owner; // rax
  unsigned __int8 Flags; // cl
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  __int64 v20; // rax
  bool v21; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  PRTL_RANGE Range; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(v4 + 44);
  if ( (v6 & 2) != 0 )
  {
    v3 = 1;
  }
  else if ( (v6 & 4) == 0
         && IoGetDeviceProperty(
              *(PDEVICE_OBJECT *)(v4 + 32),
              DevicePropertyEnumeratorName,
              0xAu,
              PropertyBuffer,
              &ResultLength) >= 0 )
  {
    v7 = wcsicmp(PropertyBuffer, L"ROOT");
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(v8 + 44);
    if ( v7 )
    {
      v10 = v9 | 4;
    }
    else
    {
      v10 = v9 | 2;
      v3 = 1;
    }
    *(_DWORD *)(v8 + 44) = v10;
  }
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v11 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v13 = *(_QWORD *)(a2 + 16);
    v14 = v13 < Range->Start;
    if ( v13 > Range->Start )
    {
      if ( Range->End < v13 )
        goto LABEL_11;
      v14 = v13 < Start;
    }
    if ( !v14 || *(_QWORD *)(a2 + 24) >= Start )
    {
      Attributes = Range->Attributes;
      if ( (*(_BYTE *)(a2 + 67) & Attributes) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (Attributes & 2) != 0) )
      {
        Owner = (struct _DEVICE_OBJECT *)Range->Owner;
        if ( Owner )
        {
          if ( v3 )
          {
            Flags = Range->Flags;
            if ( (Flags & 0x40) == 0 )
            {
              if ( (Flags & 0x20) != 0
                || IoGetDeviceProperty(Owner, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_37;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                v11->Flags |= 0x20u;
LABEL_37:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_39;
              }
              v11->Flags |= 0x40u;
              Owner = (struct _DEVICE_OBJECT *)v11->Owner;
            }
            v3 = 0;
          }
          AttachedDevice = Owner->AttachedDevice;
          if ( AttachedDevice )
            break;
        }
      }
    }
LABEL_11:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v20 )
      break;
LABEL_34:
    AttachedDevice = AttachedDevice->AttachedDevice;
    if ( !AttachedDevice )
      goto LABEL_11;
  }
  while ( AttachedDevice->DriverObject != *(struct _DRIVER_OBJECT **)(v20 + 8) )
  {
    v20 = *(_QWORD *)(v20 + 24);
    if ( !v20 )
      goto LABEL_34;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_39:
  if ( v21 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}

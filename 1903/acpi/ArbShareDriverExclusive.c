/*
 * XREFs of ArbShareDriverExclusive @ 0x1C00B7EAC
 * Callers:
 *     ArbFindSuitableRange @ 0x1C009C4C0 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // di
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  ULONGLONG Start; // rcx
  ULONGLONG v12; // rax
  bool v13; // cf
  UCHAR Attributes; // r8
  struct _DEVICE_OBJECT *Owner; // rcx
  UCHAR Flags; // al
  PRTL_RANGE v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v21; // zf
  PRTL_RANGE Range; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  memset(&Iterator, 0, sizeof(Iterator));
  v4 = *(_QWORD *)(a2 + 32);
  v5 = 0;
  v6 = *(_DWORD *)(v4 + 44);
  if ( (v6 & 2) != 0 )
  {
    v5 = 1;
  }
  else if ( (v6 & 4) == 0
         && IoGetDeviceProperty(
              *(PDEVICE_OBJECT *)(v4 + 32),
              DevicePropertyEnumeratorName,
              0xAu,
              PropertyBuffer,
              &ResultLength) >= 0 )
  {
    v7 = _wcsicmp(PropertyBuffer, L"ROOT");
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(v8 + 44);
    if ( v7 )
    {
      v10 = v9 | 4;
    }
    else
    {
      v10 = v9 | 2;
      v5 = 1;
    }
    *(_DWORD *)(v8 + 44) = v10;
  }
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v17 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v12 = *(_QWORD *)(a2 + 16);
    v13 = v12 < Range->Start;
    if ( v12 > Range->Start )
    {
      if ( Range->End < v12 )
        goto LABEL_31;
      v13 = v12 < Start;
    }
    if ( !v13 || *(_QWORD *)(a2 + 24) >= Start )
    {
      Attributes = Range->Attributes;
      if ( (*(_BYTE *)(a2 + 67) & Attributes) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (Attributes & 2) != 0) )
      {
        Owner = (struct _DEVICE_OBJECT *)Range->Owner;
        if ( Owner )
        {
          if ( v5 )
          {
            Flags = Range->Flags;
            if ( (Flags & 0x40) == 0 )
            {
              if ( (Flags & 0x20) != 0
                || IoGetDeviceProperty(Owner, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_35;
              }
              if ( !_wcsicmp(PropertyBuffer, L"ROOT") )
              {
                Range->Flags |= 0x20u;
LABEL_35:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_37;
              }
              Range->Flags |= 0x40u;
              v17 = Range;
            }
            v5 = 0;
          }
          v18 = *((_QWORD *)v17->Owner + 3);
          if ( v18 )
            break;
        }
      }
    }
LABEL_31:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v19 )
      break;
LABEL_30:
    v18 = *(_QWORD *)(v18 + 24);
    if ( !v18 )
      goto LABEL_31;
  }
  while ( *(_QWORD *)(v18 + 8) != *(_QWORD *)(v19 + 8) )
  {
    v19 = *(_QWORD *)(v19 + 24);
    if ( !v19 )
      goto LABEL_30;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_37:
  if ( v21 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}

/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0059E7C
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C005A118 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // ecx
  int v4; // ecx
  struct tagPROCESS_HID_REQUEST *v5; // rax
  int v6; // ecx
  struct tagPROCESS_HID_REQUEST *v7; // rbp
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 103);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v3 = *(_DWORD *)(v1 + 100);
  if ( v2 )
  {
    v4 = v3 | 0x10;
    *(_DWORD *)(v1 + 100) = v4;
    if ( -__CFSHR__(v4, 7) != -(*((_DWORD *)v2 + 5) & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
        ++gHidCounters[0];
      else
        --gHidCounters[0];
      v15 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v2 + 5) << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v15;
      *(_DWORD *)(v1 + 100) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 5) << 6)) & 0x80;
    }
    v17 = v1 + 72;
    v18 = *((_QWORD *)v2 + 4);
    HMAssignmentLock(&v17);
  }
  else
  {
    v11 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v11;
    if ( (v11 & 0x40) != 0 )
    {
      --gHidCounters[0];
      v11 = *(_DWORD *)(v1 + 100);
    }
    *(_DWORD *)(v1 + 100) = v11 & 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v5 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v6 = *(_DWORD *)(v1 + 100);
  v7 = v5;
  if ( v5 )
  {
    v8 = v6 | 1;
    *(_DWORD *)(v1 + 100) = v8;
    if ( -__CFSHR__(v8, 3) != -(*((_DWORD *)v5 + 5) & 1) )
    {
      if ( (*((_DWORD *)v5 + 5) & 1) != 0 )
        ++gHidCounters[1];
      else
        --gHidCounters[1];
      v16 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v5 + 5))) & 4;
      *(_DWORD *)(v1 + 100) = v16;
      *(_DWORD *)(v1 + 100) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(4 * *((_DWORD *)v5 + 5))) & 8;
    }
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 104LL);
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 16);
      else
        v10 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v10 && (unsigned int)HasHidTable(v10) && *(_QWORD *)(*(_QWORD *)(v10 + 416) + 824LL) == v1 )
        UpdateRawMouseMode(gpqForeground);
    }
    v17 = v1 + 64;
    v18 = *((_QWORD *)v7 + 4);
    HMAssignmentLock(&v17);
  }
  else
  {
    v12 = v6 & 0xFFFFFEFC;
    *(_DWORD *)(v1 + 100) = v12;
    if ( (v12 & 4) != 0 )
    {
      --gHidCounters[1];
      v12 = *(_DWORD *)(v1 + 100);
    }
    *(_DWORD *)(v1 + 100) = v12 & 0xFFFFFFF3;
    if ( gpqForeground )
    {
      v13 = *(_QWORD *)(gpqForeground + 104LL);
      v14 = v13 ? *(_QWORD *)(v13 + 16) : *(_QWORD *)(gpqForeground + 88LL);
      if ( v14 && (unsigned int)HasHidTable(v14) && *(_QWORD *)(*(_QWORD *)(v14 + 416) + 824LL) == v1 )
        UpdateRawMouseMode(gpqForeground);
    }
    HMAssignmentUnlock(v1 + 64);
  }
}

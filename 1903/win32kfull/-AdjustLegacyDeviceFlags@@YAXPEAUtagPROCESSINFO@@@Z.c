/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C010CF3C
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C010D2AC (_RegisterRawInputDevices.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C010D1F0 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
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
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

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
      v17 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v2 + 5) << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v17;
      *(_DWORD *)(v1 + 100) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 5) << 6)) & 0x80;
    }
    v19 = v1 + 72;
    v20 = *((_QWORD *)v2 + 4);
    HMAssignmentLock(&v19);
  }
  else
  {
    v12 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v12;
    if ( (v12 & 0x40) != 0 )
    {
      --gHidCounters[0];
      v12 = *(_DWORD *)(v1 + 100);
    }
    *(_DWORD *)(v1 + 100) = v12 & 0xFFFFFF3F;
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
      v18 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v5 + 5))) & 4;
      *(_DWORD *)(v1 + 100) = v18;
      *(_DWORD *)(v1 + 100) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * *((_DWORD *)v5 + 5))) & 8;
    }
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 16);
      else
        v10 = *(_QWORD *)(gpqForeground + 96LL);
      if ( v10 && (unsigned int)HasHidTable(v10) && *(_QWORD *)(*(_QWORD *)(v10 + 416) + 824LL) == v1 )
        UpdateRawMouseMode(gpqForeground, v11);
    }
    v19 = v1 + 64;
    v20 = *((_QWORD *)v7 + 4);
    HMAssignmentLock(&v19);
  }
  else
  {
    v13 = v6 & 0xFFFFFEFC;
    *(_DWORD *)(v1 + 100) = v13;
    if ( (v13 & 4) != 0 )
    {
      --gHidCounters[1];
      v13 = *(_DWORD *)(v1 + 100);
    }
    *(_DWORD *)(v1 + 100) = v13 & 0xFFFFFFF3;
    if ( gpqForeground )
    {
      v14 = *(_QWORD *)(gpqForeground + 112LL);
      v15 = v14 ? *(_QWORD *)(v14 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( v15 && (unsigned int)HasHidTable(v15) && *(_QWORD *)(*(_QWORD *)(v15 + 416) + 824LL) == v1 )
        UpdateRawMouseMode(gpqForeground, v16);
    }
    HMAssignmentUnlock(v1 + 64);
  }
}

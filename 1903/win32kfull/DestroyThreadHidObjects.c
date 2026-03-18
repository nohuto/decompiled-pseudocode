/*
 * XREFs of DestroyThreadHidObjects @ 0x1C010C990
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 *     FreeHidProcessRequest @ 0x1C010CC3C (FreeHidProcessRequest.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C010D610 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D79D4 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // dl
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  struct tagPROCESS_HID_REQUEST *v9; // rsi
  struct tagPROCESS_HID_REQUEST *v10; // rsi
  struct tagPROCESS_HID_REQUEST *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  const struct tagPROCESSINFO *v15; // rcx
  struct tagPROCESSINFO *v16; // rcx
  struct tagPROCESS_HID_REQUEST *v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 824LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      if ( (*(_DWORD *)(v2 + 100) & 0x40) != 0 )
      {
        --gHidCounters[0];
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    if ( (*(_DWORD *)(v2 + 100) & 4) != 0 )
    {
      --gHidCounters[1];
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    if ( gpqForeground )
    {
      v14 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v14 )
        v13 = *(_QWORD *)(v14 + 16);
      else
        v13 = *(_QWORD *)(gpqForeground + 96LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 == a1 )
      UpdateRawMouseMode(gpqForeground, v12);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  result = *(unsigned int *)(a1 + 1224);
  if ( (result & 0x200000) != 0 )
  {
    v15 = *(const struct tagPROCESSINFO **)(a1 + 416);
    *(_DWORD *)(a1 + 1224) = result & 0xFFDFFFFF;
    result = HasRawKeyboardPerThreadRegistration(v15);
    if ( !(_DWORD)result )
    {
      result = (__int64)SearchProcessHidRequest(v16, 1u, 6u, &v18);
      if ( result )
      {
        result = FreeHidProcessRequest((struct tagPROCESS_HID_REQUEST *)result);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    result = *((_QWORD *)v8 + 4);
    if ( result )
    {
      if ( *(_QWORD *)(result + 16) == a1 )
      {
        result = FreeHidProcessRequest(v8);
        v6 = 1;
      }
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v11 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    result = *((_QWORD *)v11 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v11);
      v6 = 1;
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v17 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    result = *((_QWORD *)v17 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v17);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 416);
    *(_DWORD *)(result + 812) |= 0x10000000u;
  }
  return result;
}

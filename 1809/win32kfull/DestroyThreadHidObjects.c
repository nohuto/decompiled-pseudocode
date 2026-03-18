/*
 * XREFs of DestroyThreadHidObjects @ 0x1C0102B50
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 *     FreeHidProcessRequest @ 0x1C0102E38 (FreeHidProcessRequest.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C0103824 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01C4714 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  struct tagPROCESS_HID_REQUEST *v6; // rdi
  struct tagPROCESS_HID_REQUEST *v7; // rcx
  struct tagPROCESS_HID_REQUEST *v8; // rdi
  struct tagPROCESS_HID_REQUEST *v9; // rdi
  struct tagPROCESS_HID_REQUEST *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  const struct tagPROCESSINFO *v13; // rcx
  struct tagPROCESSINFO *v14; // rcx
  struct tagPROCESS_HID_REQUEST *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 832LL);
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
      v12 = *(_QWORD *)(gpqForeground + 104LL);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 16);
      else
        v11 = *(_QWORD *)(gpqForeground + 88LL);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 == a1 )
      UpdateRawMouseMode(gpqForeground);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  result = *(unsigned int *)(a1 + 1208);
  if ( (result & 0x200000) != 0 )
  {
    v13 = *(const struct tagPROCESSINFO **)(a1 + 424);
    *(_DWORD *)(a1 + 1208) = result & 0xFFDFFFFF;
    result = HasRawKeyboardPerThreadRegistration(v13);
    if ( !(_DWORD)result )
    {
      result = (__int64)SearchProcessHidRequest(v14, 1u, 6u, &v16);
      if ( result )
      {
        result = FreeHidProcessRequest((struct tagPROCESS_HID_REQUEST *)result);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v6 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v7 = v6;
    v6 = *(struct tagPROCESS_HID_REQUEST **)v6;
    result = *((_QWORD *)v7 + 4);
    if ( result )
    {
      if ( *(_QWORD *)(result + 16) == a1 )
        result = FreeHidProcessRequest(v7);
    }
  }
  v8 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v8 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v10 = v8;
    v8 = *(struct tagPROCESS_HID_REQUEST **)v8;
    result = *((_QWORD *)v10 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
      result = FreeHidProcessRequest(v10);
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v15 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    result = *((_QWORD *)v15 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
      result = FreeHidProcessRequest(v15);
  }
  return result;
}

/*
 * XREFs of _FindPointerDevice @ 0x1C00E0E14
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00E0730 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C012E690 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0130930 (NtUserGetPointerDevice.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C01EF6D0 (NtUserGetPhysicalDeviceRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsPTPPointerDevicePresent @ 0x1C019AD1C (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(unsigned __int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = a2;
  if ( a1 == -2LL )
  {
    v15 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(-2LL, &v15) )
      return v3;
    v7 = v15;
  }
  else
  {
    LOBYTE(a2) = 19;
    v7 = HMValidateHandleNoSecure(a1, (__int64)a2);
  }
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 200);
    if ( (v9 & 0x80u) == 0 )
    {
      if ( !a3 )
      {
        UserSetLastError(6LL, v8);
        return v3;
      }
    }
    else if ( !a3 )
    {
LABEL_6:
      if ( (v9 & 0x80u) != 0 )
        *v5 = *(_QWORD *)(v7 + 480);
      return 1;
    }
    *a3 = v7;
    v9 = *(_DWORD *)(v7 + 200);
    goto LABEL_6;
  }
  Flink = gPointerDeviceInfoList.Flink;
  p_Blink = 0LL;
  v13 = 0;
  while ( Flink != &gPointerDeviceInfoList )
  {
    p_Blink = &Flink[-52].Blink;
    Flink = Flink->Flink;
    if ( p_Blink[87] == (struct _LIST_ENTRY *)a1 )
    {
      v13 = 1;
      break;
    }
  }
  v14 = (unsigned __int64)p_Blink & -(__int64)(v13 != 0);
  *v5 = v14;
  LOBYTE(v3) = v14 != 0;
  return v3;
}

/*
 * XREFs of _FindPointerDevice @ 0x1C01DAB38
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C0215D90 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetPointerDevice @ 0x1C0215EA0 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0215FB0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C02161B0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsPTPPointerDevicePresent @ 0x1C01BBD2C (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(unsigned __int64 a1, __int64 *a2, struct DEVICEINFO **a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DEVICEINFO *v10; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  struct DEVICEINFO *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = a2;
  if ( a1 == -2LL )
  {
    v17 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(-2LL, &v17) )
      return v3;
    v10 = v17;
  }
  else
  {
    LOBYTE(a2) = 19;
    v10 = (struct DEVICEINFO *)HMValidateHandleNoSecure(a1, (__int64)a2);
  }
  if ( v10 )
  {
    v15 = *((_DWORD *)v10 + 50);
    if ( (v15 & 0x80u) != 0 )
    {
      if ( !a3 )
      {
LABEL_17:
        if ( (v15 & 0x80u) != 0 )
          *v5 = *((_QWORD *)v10 + 60);
        return 1;
      }
    }
    else if ( !a3 )
    {
      UserSetLastError(6LL, v7, v8, v9);
      return v3;
    }
    *a3 = v10;
    v15 = *((_DWORD *)v10 + 50);
    goto LABEL_17;
  }
  Flink = gPointerDeviceInfoList.Flink;
  p_Blink = 0LL;
  v13 = 0;
  while ( Flink != &gPointerDeviceInfoList )
  {
    p_Blink = &Flink[-54].Blink;
    Flink = Flink->Flink;
    if ( p_Blink[91] == (struct _LIST_ENTRY *)a1 )
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

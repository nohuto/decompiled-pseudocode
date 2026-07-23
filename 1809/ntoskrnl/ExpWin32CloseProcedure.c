/*
 * XREFs of ExpWin32CloseProcedure @ 0x1406B34B0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 */

POBJECT_TYPE *__fastcall ExpWin32CloseProcedure(__int64 a1, int *a2, int a3, int a4)
{
  unsigned __int64 v4; // r11
  POBJECT_TYPE *result; // rax
  int v6; // ecx
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-10h]
  int v9; // [rsp+34h] [rbp-Ch]
  int v10; // [rsp+50h] [rbp+10h] BYREF

  v10 = *a2;
  v4 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v7[0] = a1;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v4];
  if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v6 = 35;
  }
  else if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v6 = 29;
  }
  else if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v6 = 20;
  }
  else if ( result == ExDesktopObjectType )
  {
    v6 = 10;
  }
  else
  {
    if ( result != (POBJECT_TYPE *)ExWindowStationObjectType )
      return result;
    v6 = 13;
  }
  return (POBJECT_TYPE *)PsInvokeWin32Callout(v6, (__int64)v7, 1, (__int64)&v10);
}

/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x1406B2160
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 */

bool __fastcall ExpWin32OkayToCloseProcedure(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r11
  POBJECT_TYPE *v6; // rax
  int v7; // ecx
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+38h] [rbp-8h]
  int v11; // [rsp+68h] [rbp+28h] BYREF

  v4 = -1073741823;
  v11 = *a2;
  v9[0] = a1;
  v5 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9[1] = a2;
  v9[2] = a3;
  v10 = a4;
  v6 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v5];
  if ( v6 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v7 = 34;
    goto LABEL_7;
  }
  if ( v6 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v7 = 28;
    goto LABEL_7;
  }
  if ( v6 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v7 = 19;
    goto LABEL_7;
  }
  if ( v6 == ExDesktopObjectType )
  {
    v7 = 9;
    goto LABEL_7;
  }
  if ( v6 == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v7 = 12;
LABEL_7:
    v4 = PsInvokeWin32Callout(v7, (__int64)v9, 1, (__int64)&v11);
  }
  return v4 >= 0;
}

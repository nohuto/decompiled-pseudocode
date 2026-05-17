/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180007950
 * Callers:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 * Callees:
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FE4B8 @ 0x1800FE4B8 (sub_1800FE4B8.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-20h]
  __int128 v16; // [rsp+58h] [rbp-18h]
  unsigned __int8 v17; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v18; // [rsp+B8h] [rbp+48h] BYREF

  v10 = 0LL;
  v4 = a2;
  v17 = 0;
  v18 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      v12 = 48;
      p_DestinationString = &DestinationString;
      v13 = 0LL;
      v15 = 64;
      v16 = 0LL;
      v5 = ZwOpenKey(&v10, 131097LL, &v12);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = v10;
      a2 = v4;
    }
    v5 = sub_1800FD168(a1, a2, &v17, &v18);
    if ( !v5 )
    {
      v8 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v8 + 4) < *(_WORD *)(v8 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(v8 + 24) + 6LL * *(unsigned __int16 *)(v8 + 4)) = v17;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v18;
          goto LABEL_5;
        }
        v9 = sub_1800FE4B8(*a3);
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = sub_18001564C(1LL, v7, v4);
      }
      *a3 = v9;
      v8 = v9;
      if ( !v9 )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)v5;
}

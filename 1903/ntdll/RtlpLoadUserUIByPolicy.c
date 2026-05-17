/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180009270
 * Callers:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 * Callees:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FE4B8 @ 0x1800FE4B8 (sub_1800FE4B8.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  unsigned __int8 v19; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+48h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v15 = a1;
    }
    else
    {
      v7 = sub_180009204(0x2000000u, v6, (__int64)&v12);
      if ( v7 < 0 )
        goto LABEL_6;
      v15 = v12;
    }
    v14 = 48;
    p_DestinationString = &DestinationString;
    v17 = 64;
    v18 = 0LL;
    v7 = ZwOpenKey(&v11, 131097LL, &v14);
    if ( v7 >= 0 )
    {
      v7 = sub_1800FD168(v11, a2, &v19, &v20);
      if ( !v7 )
      {
        v9 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = v19;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v20;
            goto LABEL_6;
          }
          v10 = sub_1800FE4B8(*a3);
        }
        else
        {
          v10 = sub_18001564C(1LL, 0LL, a2);
        }
        *a3 = v10;
        v9 = v10;
        if ( !v10 )
        {
          v7 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  if ( v11 )
  {
    ZwClose(v11);
    v11 = 0LL;
  }
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)v7;
}

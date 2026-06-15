/*
 * XREFs of PbmIsPlaying @ 0x180023860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A918 @ 0x18001A918 (sub_18001A918.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmIsPlaying(void *a1, _DWORD *a2)
{
  int v2; // edi
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  const wchar_t *v6; // rax
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( qword_18004FE78 )
    {
      v2 = sub_18001B7E4(qword_18004FE78, a1, &v8);
      if ( v2 >= 0 )
        *a2 = sub_18001EF44(v4, (__int64)v8);
      v5 = v8;
      if ( v8 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 5u )
        {
          v6 = L"Paused";
          if ( *a2 )
            v6 = (const wchar_t *)L"Playing";
          sub_18001A918(*((_QWORD *)off_18004F000 + 2), 0xDu, &stru_1800449B8, *((_DWORD *)v8 + 48), v6);
          v5 = v8;
        }
        if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v2;
}

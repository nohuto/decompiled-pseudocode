/*
 * XREFs of PbmGetSoundLevel @ 0x180023720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A918 @ 0x18001A918 (sub_18001A918.c)
 *     sub_18001A9A8 @ 0x18001A9A8 (sub_18001A9A8.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmGetSoundLevel(void *a1, __int64 a2, _DWORD *a3, __int64 a4, int *a5)
{
  int v5; // edi
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  const wchar_t *v11; // rax
  __int64 v12; // r10
  volatile signed __int32 *v14; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( a5 )
  {
    *a5 = 0;
    if ( qword_18004FE78 )
    {
      v5 = sub_18001B7E4(qword_18004FE78, a1, &v14);
      if ( v5 >= 0 )
        *a5 = sub_18001EE38(v9, (__int64)v14, a2, a3, a4);
      v10 = v14;
      if ( v14 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 5u )
        {
          v11 = sub_18001A9A8(*a5);
          sub_18001A918(*(_QWORD *)(v12 + 16), 0xCu, &stru_1800449B8, *((_DWORD *)v10 + 48), v11);
          v10 = v14;
        }
        if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v5;
}

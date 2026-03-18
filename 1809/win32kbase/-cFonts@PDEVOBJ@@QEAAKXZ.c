/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0098F80
 * Callers:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0098DFC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00AADE4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, char *); // rax
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ecx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(*(_QWORD *)this + 2104LL);
  if ( (_DWORD)result == -1 )
  {
    v3 = *(_QWORD *)this;
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)this + 2896LL);
    if ( v4 )
    {
      v5 = v4(*(_QWORD *)(v3 + 1800), 0LL, 0LL, &v7);
      v3 = *(_QWORD *)this;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 2104), v6, -1);
    if ( (_DWORD)result == -1 )
      return v6;
  }
  return result;
}

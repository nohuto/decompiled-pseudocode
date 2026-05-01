/*
 * XREFs of ?OnInvoke@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x1803FFD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDragVisualAcc::OnInvoke(CDragVisualAcc *this, struct tagPOINT a2)
{
  unsigned __int16 x; // bx
  __int64 v3; // rdx
  HWND v4; // rdi
  LPARAM v5; // rbx
  unsigned __int16 y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( *((_DWORD *)this + 4) == 2 )
    {
      v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 112LL))(*((_QWORD *)this + 4));
      v5 = x | (y << 16);
      PostMessageW(v4, 0x201u, 1uLL, v5);
      PostMessageW(v4, 0x202u, 1uLL, v5);
    }
  }
}

/*
 * XREFs of ?vSetRendering@DC@@QEAAXXZ @ 0x1C0026AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DC::vSetRendering(DC *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  *((_DWORD *)this + 358) = *((_DWORD *)this + 2 * v2 + 356);
  *((_DWORD *)this + 359) = *((_DWORD *)this + 2 * v2 + 357);
  *((_DWORD *)this + 364) = *((_DWORD *)this + 360);
  *((_DWORD *)this + 365) = *((_DWORD *)this + 361);
  *((_DWORD *)this + 366) = *((_DWORD *)this + 362);
  *((_DWORD *)this + 367) = *((_DWORD *)this + 363);
  *((_DWORD *)this + 10) |= 3u;
  if ( (*((_DWORD *)this + 9) & 0x4000) != 0 )
  {
    v3 = *((_QWORD *)this + 63);
    if ( *(_QWORD *)(v3 + 248) || (*(_DWORD *)(v3 + 116) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(v3 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      ++*(_DWORD *)(*((_QWORD *)this + 63) + 324LL);
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 63) + 312LL) + 64LL), 0);
    }
  }
}

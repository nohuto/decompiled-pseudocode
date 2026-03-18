/*
 * XREFs of NtDCompositionSetChannelCallbackId @ 0x1C0012980
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCallbackId(unsigned int a1, int a2, int a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  struct DirectComposition::CApplicationChannel *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
  if ( v5 >= 0 )
  {
    v6 = v11;
    v5 = 0;
    v7 = a2 != 0 ? 4 : 0;
    if ( a3 && *(_DWORD *)((char *)v11 + v7 + 660) )
    {
      v5 = -1073741790;
    }
    else
    {
      *(_DWORD *)((char *)v11 + v7 + 660) = a3;
      v8 = *((_BYTE *)v6 + 240);
      if ( a2 )
        v9 = v8 | 0x40;
      else
        v9 = v8 | 0x20;
      *((_BYTE *)v6 + 240) = v9;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v6)(v6);
  }
  return (unsigned int)v5;
}

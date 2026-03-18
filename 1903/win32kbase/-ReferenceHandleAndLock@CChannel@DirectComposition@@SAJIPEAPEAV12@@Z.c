/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000F324
 * Callers:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000957C (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000F2C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000F9D0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(int a1, struct DirectComposition::CChannel **a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // r14
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  _QWORD *v10; // rax
  struct _ERESOURCE *v11; // rbx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+24h] [rbp-24h]
  int v15; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0;
  v5 = 0LL;
  v6 = DirectComposition::CProcessData::Current();
  v7 = v6;
  if ( v6 )
  {
    v8 = (struct _ERESOURCE *)*((_QWORD *)v6 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = *(struct _RTL_GENERIC_TABLE **)v7;
    Buffer = a1;
    v14 = 0LL;
    v15 = 0;
    v10 = RtlLookupElementGenericTable(v9, &Buffer);
    if ( v10 )
      v5 = v10[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    else
      v4 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741823;
  }
  if ( v5 )
  {
    v11 = *(struct _ERESOURCE **)(v5 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    *a2 = (struct DirectComposition::CChannel *)v5;
  }
  return v4;
}

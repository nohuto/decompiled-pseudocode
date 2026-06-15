/*
 * XREFs of ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140012490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessNode::GetRightFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}

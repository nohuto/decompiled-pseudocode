/*
 * XREFs of ??_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800BB008 (--1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        const struct std::nothrow_t *a2)
{
  char v3; // di
  char *v4; // rcx
  unsigned __int64 v5; // rdx
  char *v6; // r8
  char *v7; // rcx
  void *v8; // rcx

  v3 = (char)a2;
  v4 = (char *)*((_QWORD *)this + 28);
  if ( v4 )
  {
    v5 = 272 * ((*((_QWORD *)this + 30) - (_QWORD)v4) / 272LL);
    if ( v5 >= 0x1000 )
    {
      v6 = (char *)*((_QWORD *)v4 - 1);
      v5 += 39LL;
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        JUMPOUT(0x1800BD795LL);
      }
      v4 = v6;
    }
    operator delete(v4, (const struct std::nothrow_t *)v5);
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 24);
  if ( v8 )
    operator delete(v8, a2);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(this);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
